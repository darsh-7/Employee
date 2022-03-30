public class person
{
    string Name;
    int Age;
    int ID;

    public string name
    {
        get { return Name; }
        set { this.Name = value; }
    }
    public int age
    { get { return Age; } set { this.Age = value; } }
    public int id
    { get { return ID; } set { this.ID = value; } }
    public person()
    {
        Name = "";
        Age = 0;
        ID = 0;
    }
    public person(string name, int age, int id)
    {
        this.Name = name;
        this.Age = age;
        this.ID = id;
    }
}
public class Employee : person
{
    double WorkingbonusHours;
    string DepartmentName;
    double Salary;
    public Employee()
    {
        WorkingbonusHours = 0;
        DepartmentName = "No Titel";
        Salary = 0;
    }
    public double workingbonushours
    {
        get { return this.WorkingbonusHours; }
        set { WorkingbonusHours = value; }
    }


    struct jobsSalary
    {
        public const double Accountant = 4000;
        public const double Manager = 6000;
        public const double Technician = 5000;
        public const double FirstClassWorker = 2000;
        public const double SecondClassWorker = 3000;
        public const double Trainee = 1050.50;
        public const double NoTitel = 0;
    }
    public double salary
    {
        set
        {
            Salary = value;
        }
        get
        {
            switch (DepartmentName)
            {
                case "Accountant": return jobsSalary.Accountant;
                case "Manager": return jobsSalary.Manager;
                case "Technician": return jobsSalary.Technician;
                case "First-class worker": return jobsSalary.FirstClassWorker;
                case "Second-class worker": return jobsSalary.SecondClassWorker;
                case "Trainee": return jobsSalary.Trainee;
                case "No Titel": return jobsSalary.NoTitel;
                default:
                    throw new Exception("wrong entry reason (job title not exist)");
            }
        }
    }
    ////Accountant, technician, manager, trainee, second-class worker, first-class worker
    public string departmentName
    {
        get { return DepartmentName; }
        set
        {
            DepartmentName = value;
            //switch (value.ToLower())
            //{
            //    case "1":
            //    case "accountant": departmentName = "Accountant"; break;
            //    case "2":
            //    case "mechnician": departmentName = "Technician"; break;
            //    case "3":
            //    case "manager": departmentName = "Manager"; break;
            //    case "4":
            //    case "first-class worker": departmentName = "First-class worker"; break;
            //    case "5":
            //    case "second-class worker": departmentName = "Second-class worker"; break;
            //    case "6":
            //    case "trainee": departmentName = "Trainee"; break;
            //    case "7":
            //    case "no titel": departmentName = "No Titel"; break;
            //    default:
            //        throw new Exception("wrong entry reason (job number or title not exist)");
            //}
        }
    }
    public void ChangeJob()
    {
        Console.WriteLine("Enter Employee job (Enter job number or name title)");
        Console.WriteLine("1- Accountant\t2-technician\t3-manager");
        Console.WriteLine("4- first-class worker\t5-second-class worker\t6-trainee\t7-no titel");
        string NewJob = Console.ReadLine();
        switch (NewJob.ToLower())
        {
            case "1":
            case "accountant": departmentName = "Accountant"; break;
            case "2":
            case "mechnician": departmentName = "Technician"; break;
            case "3":
            case "manager": departmentName = "Manager"; break;
            case "4":
            case "first-class worker": departmentName = "First-class worker"; break;
            case "5":
            case "second-class worker": departmentName = "Second-class worker"; break;
            case "6":
            case "trainee": departmentName = "Trainee"; break;
            case "7":
            case "no titel": departmentName = "No Titel"; break;
            default:
                throw new Exception("wrong entry reason (job number or title not exist)");
        }
    }
    public double bonus()
    {
        return workingbonushours *= (0.005 * salary);
    }
    //public Employee(string name = null, int age = 0, int id = -1, string departTybe = null, float workingHours = 0)
    //{
    //    this.name = name;
    //    this.age = age;
    //    this.id = id;
    //    this.DepartTybe.departmentName = departTybe;
    //    this.WorkingbonusHours = workingHours;
    //}
    public void ShowEmployee()
    {
        Console.WriteLine($"name: {name}\tage: {age}\tid: {id}");
        Console.WriteLine($"Department: {departmentName}\tsalary: {salary}\t");
    }
}

