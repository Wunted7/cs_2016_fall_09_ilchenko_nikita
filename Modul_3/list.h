#pragma once

typedef struct Node{
    int date;
    struct Node *next;
}Node;

int create_array(int *d);
int create_array_struct(int *d);
void input_array();

int array_len();
int get_index_element();
void set_index_element();
void add_new_element_end();
void add_new_element_index();
void del_i_element();
void del_last_element();
void del_all();
void sort_array();
void merge_lists();

void compare();



