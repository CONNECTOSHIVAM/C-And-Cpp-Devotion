// // Q5. write a function to print the first n Prime numbers.
// #include<stdio.h>
// #include<math.h>
// int is_prime();
// void n_prime();
// int main()
// {
//     int num;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     n_prime(num);
//     return 0;
// }
// is_prime(int y)
// {
//     if(y<=1) return 0;
//     if(y<=3) return 1;
//     if(y%2==0 || y%3==0) return 0;

//     for(int i=5;i<=sqrt(y);i++)
//     {
//         if(y%i==0) return 0;
//     }
//     return 1;
         
// }

// void n_prime(int x)
// {
//     printf("First %d prime number: ",x);
//     int num=2;
//     while (x)
//     {
//         if(is_prime(num))
//         {
//             printf("%d ",num);
//             x--;
//         }
//         num++;
//     }
    
// }