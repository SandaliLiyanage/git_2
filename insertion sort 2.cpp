int printarray(int n, vector<int> arr){  //declare a function to print the elements of an array seperated by spaces.
    for (int i = 0; i < n; i++){        
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}

void insertionSort2(int n, vector<int> arr) {                       
    
    for (int j = 1; j < (n); j++){                  //loop 1 to iterate through the unsorted part of the array 
        int k = (j-1);                             //set the pointer k to the element before the unsorted array
        int fix = arr[j];                           //assign the pivot element to a variable named fix
        
        while(k >= 0) {                 //iterate through the sorted part of the array to find the position of fix
            
            if (fix > arr[k]){
                arr[k+1] = fix;    
                printarray(n,arr);
                break;               //break from the while loop when one element is added to its right position 
                }      
            
            else{                                 //right shift the elements 
                arr[k+1] = arr[k];  
                if (k == 0){
                    arr[k] = fix;
                    printarray(n, arr);
                    
                } 
                k--;
            }
        }
    }
}