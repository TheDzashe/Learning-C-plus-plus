//Author: Nyashadzashe Makwabarara
//Date: 29/03/2024

/*The purpose of this program is to show my comprehensive understanding of linked-lists. With this program I want to achieve the following:
1. Create a linked list at first that just has a head pointer
2. Enter nodes in the linked list with the values: 25, 30, 40, 60, 80. Infact, the user should enter these values.
3. Append a node to the linked list: 3.1 - using a helper function, ask the user if the want to append the list.
                                        - If the don't, leave the function, if they do, call the append function.
4. Display all the nodes
5. Search for a particular node
6. Delete a specific node, particularly the one with the value of 40.*/

#include <iostream>

struct Node
{
    int data;
    Node* next;
};

void createList(Node* &head)
{
    Node* newNode = new Node;
    Node* current;
    int num;

    std::cout <<"Enter the value for the node: ";
    std::cin >> num;

    newNode -> data = num;
    newNode -> next = NULL;

    if (!head)
    {
        head = newNode;
    }
    else
    {
        current = head;
        while(current -> next)
        {
            current = current -> next;
        }
        current -> next = newNode;
    }

}

void appendList(Node* &head)
{
    std::string answer;
    
    std::cout << "Do you want to append a Node to the linked list? (Yes/ No):  " << std::endl;
    std:: cin >> answer;
    if(answer == "Yes" || answer == "yes")
    {
        createList(head);
    }
    else if(answer == "No" || answer == "no")
    {
        std::cout <<"Not appending the list" << std::endl;
    }
    else 
    {
        std::cout << "Invalid input. Please type in \"Yes\" or \"No\"";
        appendList(head);
    }
}

void displayList(Node* head)
{
    Node* current;

    std::cout << "The linked list is as follows: " <<std::endl;
    
    current = head;
    while(current != NULL)
    {
        std::cout << current -> data << " ";
        current = current -> next;
    }
    std::cout << std::endl;
}

bool searchList(Node* head)
{
    Node* current;
    int element;

    std::cout << "Enter the value you want you want to find: ";
    std::cin>> element;

    current = head;
    while ((current != NULL) && (current -> data != element))
    {
        current = current -> next;
    }
    if (current != NULL)
    {
        return true; //if the function was void, here you could insert an output statement to tell the user that the value is found
    }
    else
    {
        return false;
    }

}

//Helper function to print out the results of the search
void searchResultsHelper(Node* head)
{
    bool found;
    found = searchList(head);
    if (found == true)
    {
        std::cout <<"The value you are searching for has been found." <<std::endl;
    }
    else
    { 
        std::cout <<"The value you are searching for has not been found." <<std::endl;
    }
}
/*The search results function code just be deleted for more efficient code and have the search list function also tell 
the user whether the value has been found or not but I just wanted to see what the helper function could look like if my searchList
function had to return a value*/

void deleteNode(Node* head)
{
    Node* current = head;
    Node* previous = NULL;
    std::string answer;
    int element;

    std:: cout << "Do you want to delete a node? " <<std::endl;
    std::cin >> answer;

    if(answer == "Yes" || answer == "yes")
    {
        std::cout << "Enter the data value you want to delete from the list: ";
        std::cin >> element;

        while((current != NULL) && (current -> data != element))
        {
            previous = current;
            current = current -> next;
        }

        if(current == NULL)
        {
            std::cout << "The value " << element << " has not been found." <<std::endl;
        }

        if(current!= NULL)
        {
            if (previous != NULL)
            {
                previous -> next = current -> next;
                delete current;
                std::cout << "The value " << element << " has been deleted." <<std::endl;
            }  
        }
        else
        {
            head = head -> next;
            delete current;
        }
    }
    else if(answer == "No" || answer == "no")
    {
        std::cout <<"Not deleting a node." << std::endl;
    }
    else 
    {
        std::cout << "Invalid input. Please type in \"Yes\" or \"No\"";
        deleteNode(head);
    }
}

//function to delete dynamically allocated memory to prevent memory leaks
void deleteList(Node* &head) {
    Node* current = head;
    Node* nextNode;

    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }

    head = NULL; // Set head to nullptr after deleting all nodes
}

int main()
{
    Node* head = NULL; //if you declared head in the global space, you would'nt have to use reference operator on some functions
    int numOfNodes;

    std::cout << "How many nodes do you want to enter? (enter and integer value): ";
    std:: cin >> numOfNodes;

    //a loop to call the function the number of times, based on the number of nodes the user wants
    for(int i = 1; i <= numOfNodes; i++) //alternative code could for(int i =0; i < numOfNodes; i++)
    {
        createList(head);
    }

    appendList(head);

    displayList(head);

    searchResultsHelper(head);

    deleteNode(head);

    displayList(head);

    deleteList(head);

    return 0;
}

