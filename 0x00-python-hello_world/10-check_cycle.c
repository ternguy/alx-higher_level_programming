#include <stdlib.h>                                                                                                                              

#include "lists.h"                                                                                                                               

                                                                                                                                                 

/**                                                                                                                                              

 * check_cycle - it checked if a singly linked list contain a cycle                                                                              

 * @list: a singly linked list                                                                                                                   

 * return: if their is not cycle -0                                                                                                              

 *      if their is a cycle -1                                                                                                                   

 */                                                                                                                                              

                                                                                                                                                 

int check_cycle(listint_t *list)                                                                                                                 

{                                                                                                                                                

        listint_t *slow, *fast;                                                                                                                  

                                                                                                                                                 

        if (list == NULL || list->next == NULL)                                                                                                  

                return (0);                                                                                                                      

                                                                                                                                                 

        slow = list->next;                                                                                                                       

        fast = list->next->next;                                                                                                                 

                                                                                                                                                 

        while (slow && fast && fast->next)                                                                                                       

        {                                                                                                                                        

                if (slow == fast)                    
                        return (1);
                slow = slow->next;
                fast = fast->next>next;                                                   }
        return (0);
}                   
