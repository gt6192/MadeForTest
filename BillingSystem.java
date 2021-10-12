//Code written by Pratik GT (@pratik_gt_6192)

import java.util.Scanner;

class BillingSystem{
	
	public static int[] menuRate = new int[]{20, 30, 30, 60, 60, 15, 150};
	public static String[] menuItem = new String[]{"Samosa", "Wada Paw", "Dabeli", "Sandwitch", "Dahi Samosa", "Pani Puri", "Dal Tadka"};
	
	public static int[] order = new int[100];
	public static int[] orderQuantity = new int[100];
	public static int[] orderRate = new int[100];
	public static int n = 0;
	
	public static void main(String args[])
	{
		int c_case1;
		
		Scanner c_case1_scan = new Scanner(System.in);
		for(int i=0; i<=100; i++)
		{
			System.out.println("");
			System.out.println("*************************************************");
			System.out.println("Hotel");
			System.out.println("1. View Menu");
			System.out.println("2. Create Order");
			System.out.println("0. Exit");
			System.out.print("Enter your Choice = ");
			c_case1 = c_case1_scan.nextInt();
		
			switch(c_case1)
			{
				case 1:
					displayMenu();
					break;
			
				case 2:
					createOrder();
					DisplayBill();
					break;
					
				case 0:
					System.exit(0);
			
				default:
					System.out.println("Invalid choice added!");
					break;
			}
		}
	}
	
	public static int displayMenu()
	{
		System.out.println("");
		System.out.println("Menu");
		for(int i=0; i<menuRate.length; i++)
		{
			System.out.println(i+1 + ".)\t" + menuItem[i] + "\t\t" + menuRate[i]);
			System.out.println("");
		}
		return 0;
	}
	
	public static void createOrder()
	{
		int a, b, rate, c_case2;
		Scanner order_scan = new Scanner(System.in);
		Scanner c_scan = new Scanner(System.in);
		
		for(int i=0; i<=100; i++)
		{
			System.out.print("Enter Item no = ");
			a = order_scan.nextInt();
			System.out.print("");
			System.out.print("Enter Quantity = ");
			b = order_scan.nextInt();
			rate = menuRate[a-1] * b;
			orderFactory(a, b, rate);
			
			System.out.print("Do you want to add more = ");
			c_case2 = c_scan.next().charAt(0);
			System.out.print("");
			if(c_case2 == 'n')
			{
				break;
			}
		}
	}
	
	public static void orderFactory(int a, int b, int rate)
	{
		order[n] = a-1;
		orderQuantity[n] = b;
		orderRate[n] = rate;
		n++;
	}
	
	public static void DisplayBill()
	{
		int total = 0;
		System.out.println("");
		System.out.println("Bill");
		for(int i=0; i<=n-1; i++)
		{
			System.out.println(i+1 + ".)\t" + menuItem[order[i]] + "\t\t" + orderQuantity[i] + "\t\t" + orderRate[i]);
			total = total + orderRate[i];
			System.out.println("");
		}
		System.out.println("*.)\t\tTotal\t\t" + total);
		System.out.println("");
		System.out.println("*************************************************");
	}
}
