#include<stdio.h>

int main()
{
    int len; //Length of array will be taken from user.
    int i, j, k; //Looping variables.
    //In this program we have 3 loop all nested in k, i, j manner.

    int temp = 0, temp2 = 0, temp3 = 0; //Temporary variables, use to show true or false.
    int loop; //Loop count for j loop.
    int n; //Used to pop shortest element from array.
    int shortest; //store shortest value in array.

    // Getting dimension of array from user.
    printf("Enter the length of array = ");
    scanf("%d",&len);
    // ! Getting dimension of array from user.

    int a[len]; // Declaring  Array with 'len' number of dimension.

    //Getting value of array elements from user.
    printf("Enter the %d elements = \n", len);
    for(i=0;i<len;i++)
    {
        printf("> %d >",i+1);
        scanf("%d", &a[i]);
    }
    // ! Getting value of array elements from user.

    //Printing array.
    for(i=0;i<len;i++)
    {
        printf("%d\n", a[i]);
    }
    // ! Printing array.

    //Finding shortest element in array.
    shortest = a[0]; //Store the  1st element of array in shortest variable.
    //The very first element of array starts from a[0] place.
    for(i=0;i<len;i++)
    {
        if(a[i] < shortest) //Check if the value of a[i] is less that shortest variable or not.
        {
            //If the value of a[i] is less than shortest than store the value of a[i] in shortest variable.
            shortest = a[i];
            //By doing this we can the the smallest value from the array.
            /*
                For example:
                a[3] = {2, 1, 4}
                shortest = a[0] it means its 2
                if a[i] < shortest where i = 0;
                    condition will be false, so keep looping
                if a[i] < shortest where i = 1;
                    condition is true now because 1 is smaller than 2.
                    so shortest = a[i]
                now our shortest variable holds the shortest value.
            */
        }
    }
    // ! Finding shortest element in array.

    printf("Shortest number is = %d", shortest); //Printing shortest element.

    // Popping out the smallest value from array.
    /*
        To pop the smallest value, we need to understand some logics.
        a[4] = {2, 1, 3, 4}
        shortest = 1
        Now if we pop one element from array, we will get one position empty:
            a[4] = {2, empty, 3, 4}
            to avoid it, shift all further elements one step back
            a[4] = {2, 3, 4, empty}
        We are gona do this in further lines of code.
    */
    for(k=0;k<len;k++)
    {
        /*
            What does k loop do?
                I was getting one problem in this code that it was just popping one element
                if 1 occurs 2 to more than 3 times.
                This loop add our array len number on times in this popping process,
                it means if our array contains len elements than it will repeat this process len times.
        */
        for(i=0;i<len;i++)
        {
            /*
                What does i loop do?
                    It helps us to loop through all the element of array.
            */
            if(a[i] == shortest) //Here we are checking if the element is shortest or not.
            {
                //If the element is shortest than start shifting a[i+1] elements one step back.
                if(temp2 == 0) //It is telling k loop that no value is popped yet.
                {
                    if(temp == 0) //It is telling i loop that no value is popped yet.
                    {
                        loop = len-i+1; //Now we want a count for how much to loop.
                        /*
                            if our control in on 2nd position
                                2, 1, 3, 4 means on 1
                                shift 3 one step back
                                so now we just need to loop 1 time more to shift the value 4 to one step back.
                                now the value 1 is stored in loop variable.
                        */
                        n = i; //n defines the position of out control.
                        //It will be used to shift the element from nth position to n - 1th position.
                        for(j=0;j<loop;j++) //j loop  is used to pop the element.
                        {
                            a[n] = a[n+1]; //start shifting
                            n++; //increase the address from n to n + 1th position.
                            //repeat this process till the end.
                        }
                        temp++; //now tell i loop that temp = 1 means 1 element is popped.
                    }
                    temp2++; //now tell k loop that temp2 = 1 means 1 element is popped.
                }
                if(temp3 != 0) //temp3 tells that atleast one element got popped.
                {
                    /*
                        if atleast one element is popped and its a second time,
                        then start decreasing the length of array.
                    */
                    loop = len-i+1;
                    n = i;
                    for(j=0;j<loop;j++) // Pop the element.
                    {
                        a[n] = a[n+1];
                        n++;
                    }
                    len--; //Decrease the length of array
                }
                temp3++;
            }
        }
    }
    // ! Popping out the smallest value from array.

    // Printing Final Array.
    a[len-1] = a[len-2]; //Now we need to print last element two times.
    /*It stores the last element on n+1 position so that last element could printed two times.*/

    printf("\nElements of array are = ");
    for(i=0;i<len;i++)
    {
        printf(" %d", a[i]);
    }
    // ! Printing Final Array.
}
