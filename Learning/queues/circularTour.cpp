// class Solution
// {
// public:
//     // Function to find starting point where the truck can start to get through
//     // the complete circle without exhausting its petrol in between.
//     int tour(petrolPump p[], int n)
//     {
//         int deficit = 0;
//         int balance = 0;
//         int front = 0;

//         for (int rear = 0; rear < n; rear++)
//         {
//             balance += p[rear].petrol - p[rear].distance;
//             if (balance < 0)
//             {
//                 deficit += balance;
//                 front = rear + 1;
//                 balance = 0;
//             }
//         }

//         if (balance + deficit >= 0)
//         {
//             return front;
//         }

//         else
//         {
//             return -1;
//         }
//     }
// };