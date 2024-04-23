using namespace std;

struct node
{
    int coff;
    int expo;
    struct node *next;
};

typedef struct node node;
node *head = NULL



void insert(int coff,int expo)
{
    node *temp = NULL;
    temp = (node*) malloc(sizeof(node));
    if(temp == NULL)
    exit(1);
    temp->coff = coff;
    temp->coff = coff;
    temp->coff = coff;
    
}

