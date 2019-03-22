#ifndef _HOLBERLTON_H
#define _HOLBERTON_H
void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
#endif
