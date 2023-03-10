/*
    - Each variable uses space on computer's memory to store its value
    - Allocate -> we indicate that var has been given some space on computer's memory
    - Deallocate -> space has been reclaimed by computer and var cannot be accessed now

    - Memory allocation is done in two ways -
        - Static memory allocation (compile time allocation)
        - Dynamic memory allocation (Run time allocation)

---------------------------------------------------------------------------------------------------------------------

    * Static Memory allocation 
        In this, size and location where variable will be stored is [fixed] during compile time

        #include <iostream>
        using namespace std;

        int main(){
            int x; 4 byte and memory add 201
            char c;
            int arr[10];
        }

        - In static memory allocation, compiler calculates how much memory above variables will need and fix a location where these variables will be stored.

        - locations of where variables will be stored is SAVED, but actual physical memory is NOT allocated to variables at compile time.
        -Actual physical memory is allocated at RUNTIME ONLY.

        - Static memory allocation is slightly faster than dynamic memory allocation

        - Alloaction and deallaction of memory is done by compiler.

---------------------------------------------------------------------------------------------------------------------


    * Dynamic Memory allocation 

        - It allows us to define memory requirements during the execution of the program

        - It uses a special type of memory called HEAP memory.

        - New keyword is use to allocate memory

        - Delete keyword is used to deallocate memory

        - In this, unlike static memory, the allocation and deallocation of memory should be done by the programmer.

        #include <iostream>
        using namespace std;

        int main(){
            int n;
            cin >> n;

            allocate memory

            int *arr = new int[n];
            cout << sizeof(arr) << endl;

            for(int i = 0; i < n; i++){
                cin >> arr[i];
            }

            deallocate
            delete[] arr;
        }

        - New keyword returns the address that has been allocated to the variable on the heap memory, this happens during the time of execution

        - during thee execution of program, depending on the value of n, new keyword returns the physical address of the memory where the array has been allocated memory on heap.
*/





