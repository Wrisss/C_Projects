/**
 * BLOCK COMMENT:
 * Testing C Syntax Highlighting
 */

 /*To change colors of syntax elements:
 1. Cltr+LeftShift+P
 2. Developer: Inspect Syntax and tokens
 3. Change the Settings.json file.*/

// 1. Preprocessor Directives (keyword.control.directive)
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define MAX_BUFFER_SIZE 1024       // Macro (entity.name.function.preprocessor)
#define CALCULATE(a, b) ((a) + (b)) 

typedef unsigned long long uint64;

enum State {
    STATE_IDLE = 0,   // Enum Member (variable.other.enummember)
    STATE_ACTIVE = 1,
    STATE_ERROR = -1
};

// 3. Structs & Unions
struct Vector2 {
    float x; // Struct Field (variable.other.member)
    float y;
};

union DataPacket {
    int id;
    char raw[4];
};

// 4. Function Prototype
// 'static' is a Storage Modifier (storage.modifier)
static void process_vector(struct Vector2* vec); 

// Global Variable
const double PI = 3.14159; // Constant (variable.other.constant)

// 5. Main Function
int main(int argc, char *argv[]) {
    // Basic Types (storage.type)
    int counter = 0;
    char letter = 'A';              // Character Literal
    char *message = "Hello World\n"; // String Literal & Escape Character
    bool is_running = true;

    // Arrays & Pointers
    int numbers[5] = {1, 2, 3, 4, 5};
    int *ptr = &counter; // Operator (keyword.operator)

    // 6. Control Flow (keyword.control)
    if (argc > 1) {
        printf("Arguments: %d\n", argc); // Library Function (support.function)
    } else {
        counter += 10;
    }

    // Loops
    for (int i = 0; i < 5; i++) {
        if (i == 2) continue; // Control Keyword
        
        switch (i) {
            case 0:
                is_running = false;
                break;
            default:
                // Ternary Operator
                counter = (i % 2 == 0) ? 100 : 200; 
        }
    }

    // 7. Memory Management & Type Casting
    struct Vector2 *my_vec = (struct Vector2*) malloc(sizeof(struct Vector2));
    
    if (my_vec != NULL) {
        my_vec->x = 10.5f; // Arrow operator
        my_vec->y = 20.0f;
        
        process_vector(my_vec);
        free(my_vec);
    }

    return STATE_IDLE;
}

void process_vector(struct Vector2* vec) {
    // Math operations
    vec->x = CALCULATE(vec->x, 5.0f);
    return;
}