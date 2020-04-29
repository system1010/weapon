#include<stdio.h>
#include<stdlib.h>

struct Node
{
char data;
struct Node *left, *right;
Node(char dat)
{
        data = dat;
        left = NULL;
        right = NULL;
}
};

struct Stack
{
	int top;
	unsigned capacity;
	struct Node* array[100];

Stack(unsigned capacity)
{
capacity = capacity;
top = 0;
}
void push(struct Node* item)
{
//if (isFull(stack))
//return;
array[++top] = item;
}
struct Node* pop()
{
//if (isEmpty(stack))
//return INT_MIN;
return array[top--];
}
};
int isFull(struct Stack* stack)
{ return stack->top == stack->capacity - 1; }
int isEmpty(struct Stack* stack)
{ return stack->top == -1; }

void visit(struct Node* current ) {
	printf("%c ", current->data);
}

int main()
{

struct Node* root=new Node('A');
root->left=new Node('B');
root->right=new Node('C');
root->left->left=new Node('D');
root->right->left=new Node('E');
root->right->right=new Node('F');
root->right->left->right=new Node('G');
root->right->right->left=new Node('H');
root->right->right->right=new Node('J');

struct Stack* stack = new Stack(100);

struct Node* P=new Node('P');

P=root;
//do{
//int x=-1;
while(1){
	if(P){
		stack->push(P);
		//visit(P);
		P=P->left;
		continue;
	}else if (stack->top){
		//printf("%cn", P->data);
		//if (P->right!=NULL)printf("%cn", P->right->data);
		//if (P->right==NULL && P->left==NULL && stack->top>=0)break;
		//if (stack->top==-1)goto label2;
		P=stack->pop();
		//while(P->left!=NULL){
			visit(P);
		//	if(stack->top==-1)break;
		//	P=pop(stack);
		//	x=1;
		//}
		//if (x=1){
			P=P->right;
			//x=-1;
		//}
		continue;
	}
break;
}
//}while(stack->top || P);
struct Stack* s1 = new Stack(100);
struct Stack* s2 = new Stack(100);

 struct Node* node=new Node('N');

 // push root to first stack
  s1->push(root);
   //Node* node;
   // Run while first stack is not empty
  while (s1->top) {
  // Pop an item from s1 and push it to s2
  //node = s1->top;
  node=s1->pop();
  s2->push(node);
  // Push left and right children
  // of removed item to s1
  if (node->left)s1->push(node->left);
  if (node->right)s1->push(node->right);
   }
printf("\n");
  while(s2->top)
  visit(s2->pop());
return 0;
}
