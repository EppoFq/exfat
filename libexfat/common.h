#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED

#if 0
extern unsigned int alloc_size;
extern void *tmpptr;
#define d_malloc(size)  tmpptr=malloc(size);printf("alloc %09d %p %s %s %d\n",size,tmpptr,__FILE__,__FUNCTION__,__LINE__);alloc_size+=size;
#define d_free(ptr)	  free(ptr);printf("free %p %s %s %d\n",ptr,__FILE__,__FUNCTION__,__LINE__);
#else
#define d_malloc(size) 	malloc(size);
#define d_free(ptr)		free(ptr);
#endif

#endif