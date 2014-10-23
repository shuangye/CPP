#include <stdio.h>

struct obj_layout {
    unsigned int retained;  // to store reference count
};

void *alloc(size_t obj_size)
{
    int size = sizeof(struct obj_layout) + obj_size;
    struct obj_layout *p = (struct obj_layout *)calloc(1, size);
    return (void *)(p + 1);
}

void dealloc(void *obj)
{
    struct obj_layout *p = ((struct obj_layout *)obj) - 1;
    free(p);
}

unsigned int retainCount(void *obj)
{
    return ((struct obj_layout *)obj)[-1].retained + 1;
}

void *retain(void *obj)
{
    ++((struct obj_layout *)obj)[-1].retained;
    return obj;
}

void release(void *obj)
{
    if (0 == ((struct obj_layout *)obj)[-1].retained)
        dealloc(obj);
    else
        --((struct obj_layout *)obj)[-1].retained;
}

int main(int argc, char *argv[])
{
    void *p = alloc(16);
    printf("Addr: %p; retain count: %d.\n", p, retainCount(p));
    p = retain(p);
    printf("Addr: %p; retain count: %d.\n", p, retainCount(p));
    release(p);
    printf("Addr: %p; retain count: %d.\n", p, retainCount(p));
    dealloc(p);
    printf("Addr: %p; retain count: %d.\n", p, retainCount(p));    
    return 0;
}