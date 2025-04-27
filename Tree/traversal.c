#include<stdio.h>
    #include<conio.h>
    #include<malloc.h>

    struct Node
    {
        struct Node *left;
        struct Node *right;
        char data;
    };

    void Inorder(struct Node *t){
        /*Preorder (DLR)
        Inorder (LDR)
        Postorder (LRD)*/
        if (t!=NULL){
            Inorder(t->left);
            printf("%c\t",t->data);
            Inorder(t->right);
        }
    }
    void Postorder(struct Node *t){
        if(t!= NULL){
            Postorder(t->left);
            Postorder(t->right);
            printf("%c \t",t->data);
        }
    }
    void Preorder(struct Node *t){
        if(t != NULL){
            printf("%c \t",t->data);
            Preorder(t->left);
            Preorder(t->right);
        }
    }
    

    int main(){
        struct Node *f,*g,*h,*i,*j,*k;
        f = malloc(sizeof(struct Node));
        g = malloc(sizeof(struct Node));
        h = malloc(sizeof(struct Node));
        i = malloc(sizeof(struct Node));
        j = malloc(sizeof(struct Node));
        k = malloc(sizeof(struct Node));

        f->data = 'F';
        g->data = 'G';
        h->data = 'H';
        i->data = 'I';
        j->data = 'J';
        k->data = 'K';

        f->left= g;
        f->right = h;
        g->right = i;
        h->right = k;
        i->left = j;
        j->left = j->right = i->right = g->left = k->left = k->right = h->left = NULL;

        printf("The Tree is : \n");
        printf("    %c\n",f->data);
        printf("   / \\ \n");
        printf("  %c   %c\n",g->data,h->data);
        printf("   \\   \\ \n");
        printf("     %c  %c\n",i->data,k->data);
        printf("    /\n");
        printf("   %c\n",j->data);

        printf("The Preorder Travelsel is : \n");
        Preorder(f);
        printf("\nThe Inorder Travelse of the above tree is : \n");
        Inorder(f);
        printf("\nThe Postorder Travels is : \n");
        Postorder(f);
        return 0;

    }