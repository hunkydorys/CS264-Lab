using namespace std;

struct customer{
       string name;
       customer *next;
};

void print_customers(customer &head);
customer *create_list(string name);
void insert_name(customer* head, string name);
int list_length(customer* head);


