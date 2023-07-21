using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal class Program
    {
        static void writeArray(int[] arr)
        {
            for (int i = 0; i < arr.Length; i++) 
            {
                Console.Write(arr[i] + ",");
            }
        }
        static void Main(string[] args)
        {
            int[] arr1 = { 2, 5, 8, 1, 7 };
            int j = 0;
            int[] arr2 = new int [5];
            

            for (int i = 0; i < arr1.Length; i++)
            {
                if (arr1[i] % 2 == 0)
                {
                    
                    arr2[j] = arr1[i];
                    j++;
                }
            }
            writeArray(arr2);
            
        }
    }
}
