namespace Company
{
    using System;
    class Company
    {
        public static void Main()
        {
            Console.WriteLine("how many Employee do you want");
            Employee[] employees = new Employee[ask_for_int()];
            for (int i = 0; i < employees.Length; i++)
            {
                employees[i] = new Employee();
                Console.WriteLine("Enter employee name");
                employees[i].name = ask_for_string();
                Console.WriteLine("Enter employee age");
                employees[i].age = ask_for_int();
                Console.WriteLine("Enter employee id");
                employees[i].id = ask_for_int();
                employees[i].ChangeJob();
                Console.WriteLine("Enter employee salary (for dufalt value enter \"-1\"");
                employees[i].salary = ask_for_double();
                Console.WriteLine("Enter employee working bonus Hours");
                employees[i].workingbonushours = ask_for_double();
            }
            Console.WriteLine("____________________________________________");
            foreach(var emp in employees)
            {
                Console.WriteLine($"name: {emp.name}");
                Console.WriteLine($"age: {emp.age}");
                Console.WriteLine($"id: {emp.id}");
                Console.WriteLine($"departTybe: {emp.departmentName}");
                Console.WriteLine($"salary: {emp.salary}$");
                Console.WriteLine($"working bonus Hours: {emp.workingbonushours}");
                Console.WriteLine($"bonus :{emp.bonus()}$");
                Console.WriteLine("____________________________________________");
            }


            static char ask_for_char()
            {
                char ask_char;
                do
                {
                    try
                    {
                        ask_char = char.Parse(Console.ReadLine());
                        return ask_char;
                    }
                    catch
                    {
                        Console.WriteLine("Error, please enter correct symbol");
                    }
                } while (true);
            }
            static int ask_for_int()
            {
                int ask_number;
                do
                {
                    try
                    {
                        ask_number = int.Parse(Console.ReadLine());
                        return ask_number;
                    }
                    catch
                    {
                        Console.WriteLine("Error, Please enter a real number");
                    }
                } while (true);
            }
            static float ask_for_float()
            {
                float ask_number;
                do
                {
                    try
                    {
                        ask_number = float.Parse(Console.ReadLine());
                        return ask_number;
                    }
                    catch
                    {
                        Console.WriteLine("Error, Please enter a real number");
                    }
                } while (true);
            }
            static double ask_for_double()
            {
                float ask_number;
                do
                {
                    try
                    {
                        ask_number = float.Parse(Console.ReadLine());
                        return ask_number;
                    }
                    catch
                    {
                        Console.WriteLine("Error, Please enter a real number");
                    }
                } while (true);
            }
            static string ask_for_string()
            {
                string value;
                do
                {
                    try
                    {
                        value = Console.ReadLine();
                        if (string.IsNullOrEmpty(value))
                        {
                            Console.WriteLine("Error, Please enter the student name");
                            continue;
                        }
                        else
                            return value;
                    }
                    catch (Exception)
                    {
                        throw new("Invalid input value ");
                    }
                } while (true);
            }
        }
    }
}