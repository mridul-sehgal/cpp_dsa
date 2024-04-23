#include <iostream>
#include <ctime>
#include <cstdlib>

// Node structure for the linked list
struct Node {
    int value;
    bool isMatched;
    Node* next;
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->value = value;
    newNode->isMatched = false;
    newNode->next = nullptr;
    return newNode;
}

// Function to shuffle an array of integers
void shuffleArray(int arr[], int n) {
    for (int i = n - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        std::swap(arr[i], arr[j]);
    }
}

// Function to initialize the linked list with shuffled values
Node* initializeList(int values[], int n) {
    Node* head = nullptr;
    Node* tail = nullptr;
    shuffleArray(values, n);

    for (int i = 0; i < n; ++i) {
        Node* newNode = createNode(values[i]);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

// Function to display the linked list
void displayList(Node* head) {
    Node* current = head;
    while (current) {
        if (current->isMatched)
            std::cout << current->value << " ";
        else
            std::cout << "* ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Function to check if the game is over (all cards matched)
bool isGameOver(Node* head) {
    Node* current = head;
    while (current) {
        if (!current->isMatched)
            return false;
        current = current->next;
    }
    return true;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    // Initialize the linked list with values (pairs of numbers)
    int values[] = {1, 1, 2, 2, 3, 3, 4, 4}; // Example: 4 pairs of cards
    int numCards = sizeof(values) / sizeof(values[0]);
    Node* head = initializeList(values, numCards);

    std::cout << "Memory Matching Game\n";
    std::cout << "---------------------\n";

    while (!isGameOver(head)) {
        displayList(head);

        int pos1, pos2;
        std::cout << "Enter two positions (1-" << numCards << "): ";
        std::cin >> pos1 >> pos2;

        // Check if the selected positions are valid
        if (pos1 < 1 || pos1 > numCards || pos2 < 1 || pos2 > numCards) {
            std::cout << "Invalid positions. Try again.\n";
            continue;
        }

        // Find the corresponding nodes
        Node* node1 = head;
        Node* node2 = head;
        for (int i = 1; i < pos1; ++i)
            node1 = node1->next;
        for (int i = 1; i < pos2; ++i)
            node2 = node2->next;

        // Check if the cards match
        if (node1->value == node2->value && !node1->isMatched && !node2->isMatched) {
            node1->isMatched = true;
            node2->isMatched = true;
            std::cout << "Match found!\n";
        } else {
            std::cout << "No match. Try again.\n";
        }
    }

    std::cout << "Congratulations! You've matched all pairs.\n";
    return 0;
}

/* Certainly! Let's break down the **Memory Matching Game** code step by step:

1. **Node Structure**:
    - We define a `struct Node` to represent each card in the game.
    - Each node contains:
        - An integer `value` representing the card's value (e.g., 1, 2, 3, ...).
        - A boolean `isMatched` indicating whether the card has been matched.
        - A pointer `next` to the next node in the linked list.

2. **Creating a New Node**:
    - The `createNode` function creates a new node with the given value and initializes other fields.
    - It returns a pointer to the newly created node.

3. **Shuffling the Values**:
    - We shuffle an array of integers (representing card values) using the `shuffleArray` function.
    - This ensures that the cards are randomly distributed.

4. **Initializing the Linked List**:
    - The `initializeList` function creates a linked list with shuffled card values.
    - It takes an array of values and the number of cards as input.
    - It creates nodes for each value and links them together.
    - The head of the list is returned.

5. **Displaying the List**:
    - The `displayList` function prints the current state of the linked list.
    - If a card is matched (`isMatched` is true), we display its value; otherwise, we show an asterisk (`*`).

6. **Checking Game Over**:
    - The `isGameOver` function checks if all cards have been matched.
    - If all cards are matched, the game is over.

7. **Main Game Loop**:
    - Inside `main()`, we:
        - Initialize the random seed.
        - Create a linked list with example values (pairs of numbers).
        - Enter the game loop until all cards are matched:
            - Display the list.
            - Prompt the user for two positions (1 to numCards).
            - Validate the positions.
            - Find the corresponding nodes.
            - Check if the cards match.
                - If matched, mark both cards as matched.
                - Otherwise, prompt the user to try again.
        - Print a congratulatory message when the game is over.

8. **Example Usage**:
    - The example values `{1, 1, 2, 2, 3, 3, 4, 4}` represent four pairs of cards.
    - You can modify the values or add more pairs to customize the game.

Remember that this is a basic implementation. You can enhance it by adding features like graphics, a timer, or a user-friendly interface. Enjoy playing your Memory Matching Game! 🃏🎮*/