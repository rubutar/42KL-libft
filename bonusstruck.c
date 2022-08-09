#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_list
{
    void *content;
    size_t content_size;
    struct s_list *next;
} t_list;

t_list * lstnew( const void *content, size_t content_size )
{
    t_list *new = malloc( sizeof( t_list ) );

    if ( new != NULL )
    {
        new->content = malloc( content_size );

        if ( new->content == NULL )
        {
            free( new );
            new = NULL;
        }
        else
        {
            memcpy( new->content, content, content_size );
            new->content_size = content_size;
            new->next = NULL;
        }
    }

    return new;
}


int main(void) 
{
    t_list *head = lstnew( "Hello", 6 );
    head->next = lstnew("World!", 7 );

    printf( "%s %s\n", ( char * )head->content, ( char * )head->next->content );

    return 0;
}
