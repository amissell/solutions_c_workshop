#include <stdio.h>
#include <string.h> 

void add_reserve();
void display_reserve();
void modify_reserve();
void delete_reserve();
void search_reserve_by_id();
void search_reserve_by_name();
void display_elements();
void sort_reserves_by_name();
void calcul_age_statistics();
void calcul_status_statistics();

#define MAX_RESERVE 80
#define MAX_NAME_LEN 35
#define MAX_PHONE_LEN 15
#define MAX_STATUS_LEN 20

char names[MAX_RESERVE][MAX_NAME_LEN];
char phones[MAX_RESERVE][MAX_PHONE_LEN];
char status[MAX_RESERVE][MAX_STATUS_LEN]; 
int ages[MAX_RESERVE];
int NB_Reserve = 0;

void display_elements()
{
    strcpy(names[0], "Amal Issellay");
    strcpy(phones[0], "1234567890");
    ages[0] = 25;
    strcpy(status[0], "validated");

    strcpy(names[1], "Jannat hxgsmzn");
    strcpy(phones[1], "2345678901");
    ages[1] = 22;
    strcpy(status[1], "postponed");

    strcpy(names[2], "Hjjhxaks hjgdsbc");
    strcpy(phones[2], "3456789012");
    ages[2] = 30;
    strcpy(status[2], "canceled");

    strcpy(names[3], "Hsgbcsj ufhdsu");
    strcpy(phones[3], "4567890123");
    ages[3] = 27;
    strcpy(status[3], "processed");

    strcpy(names[4], "Jhdsjbc kjhdjf");
    strcpy(phones[4], "5678901234");
    ages[4] = 20;
    strcpy(status[4], "validated");

    strcpy(names[5], "Hdgs jhdhj");
    strcpy(phones[5], "6789012345");
    ages[5] = 28;
    strcpy(status[5], "postponed");

    strcpy(names[6], "Bhdwj hdsj");
    strcpy(phones[6], "7890123456");
    ages[6] = 26;
    strcpy(status[6], "canceled");

    strcpy(names[7], "Hdakjh jdb");
    strcpy(phones[7], "8901234567");
    ages[7] = 24;
    strcpy(status[7], "processed");

    strcpy(names[8], "Uhhjc uhfsjkjb");
    strcpy(phones[8], "9012345678");
    ages[8] = 29;
    strcpy(status[8], "validated");

    strcpy(names[9], "Jhisdh kdh");
    strcpy(phones[9], "0123456789");
    ages[9] = 23;
    strcpy(status[9], "postponed");

    NB_Reserve = 10;
}

void sort_reserves_by_name()
{
    for (int i = 0; i < NB_Reserve - 1; i++) 
    {
        for (int j = 0; j < NB_Reserve - i - 1; j++) 
        {
            if (strcasecmp(names[j], names[j + 1]) > 0) 
            {
                char temp_name[MAX_NAME_LEN];
                strcpy(temp_name, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp_name);
            }
        }
    }
    display_reserve();
    printf("Reservations sorted by name!!!!!!\n");
}

void display_reserve() 
{
    if (NB_Reserve == 0) 
    {
        printf("No Reservations to display!!!\n");
    } 
    else 
    {
        for (int i = 0; i < NB_Reserve; i++) 
        {
            printf("Reserve %d\n", i + 1);
            printf("Name: %s\n", names[i]);
            printf("Phone: %s\n", phones[i]);
            printf("Age: %d\n", ages[i]);
            printf("Status: %s\n", status[i]);
        }
    }
}

void add_reserve() 
{
    if (NB_Reserve >= MAX_RESERVE) 
    {
        printf("No space for reservations!!!!!\n");
    } 
    else 
    {
        printf("Enter Name: ");
        scanf(" %[^\n]", names[NB_Reserve]);
        printf("Enter Phone: ");
        scanf("%s", phones[NB_Reserve]);
        printf("Enter Age: ");
        scanf("%d", &ages[NB_Reserve]);
        printf("Enter Status (1. validated, 2. postponed, 3. canceled, 4. processed): ");
        scanf("%s", status[NB_Reserve]);
        NB_Reserve++;
        printf("Reservation added successfully!!!!\n");
    }
}

void modify_reserve() 
{
    int id;
    printf("Enter the id to modify: ");
    scanf("%d", &id);
    
    if (id > 0 && id <= NB_Reserve) 
    {
        int index = id - 1;
        
        printf("Current name: %s\n", names[index]);
        printf("Enter new name: ");
        scanf("%s", names[index]);

        printf("Current Phone: %s\n", phones[index]);
        printf("Enter new phone: ");
        scanf("%s", phones[index]); 

        printf("Current Age: %d\n", ages[index]);
        printf("Enter new age: ");
        scanf("%d", &ages[index]);

        printf("Current Status: %s\n", status[index]);
        printf("Enter new status: ");
        scanf("%s", status[index]);

        printf("Reservation modified successfully!!!!!!\n");
    } 
    else 
    {
        printf("No reservation with that id.\n");
    }
}

void delete_reserve() 
{
    int id;
    printf("Enter the id to delete: ");
    scanf("%d", &id);

    if (id > 0 && id <= NB_Reserve) 
    {
        int index = id - 1;
        printf("Deleting reservation for %s\n", names[index]);
        for (int j = index; j < NB_Reserve - 1; j++) 
        {
            strcpy(names[j], names[j + 1]);
            strcpy(phones[j], phones[j + 1]);
            strcpy(status[j], status[j + 1]);
            ages[j] = ages[j + 1];
        }
        NB_Reserve--;
        printf("Reservation deleted successfully!\n");
    }
    else 
    {
        printf("No reservation with that id.\n");
    }
}

void search_reserve_by_id() 
{
    int id;
    printf("Enter the id to search: ");
    scanf("%d", &id);
    
    if (id > 0 && id <= NB_Reserve) 
    {
        int index = id - 1;
        printf("Reservation :  \n");
        printf("Name: %s\n", names[index]);
        printf("Phone: %s\n", phones[index]);
        printf("Age: %d\n", ages[index]);
        printf("Status: %s\n", status[index]);
    }
    else 
    {
        printf("No reservation with that id.\n");
    }
}

void search_reserve_by_name() 
{
    char search_name[MAX_NAME_LEN];
    printf("Enter the name to search: ");
    scanf("%s", search_name);
    
    int x = 0;
    
    for (int index = 0; index < NB_Reserve; index++)
    {
        if (strcasecmp(names[index], search_name) == 0) 
        {
            printf("Reservation: \n");
            printf("Name: %s\n", names[index]);
            printf("Phone: %s\n", phones[index]);
            printf("Age: %d\n", ages[index]);
            printf("Status: %s\n", status[index]);
            x = 1;
            break;
        }
    }
    
    if (!x) 
    {
        printf("No reservation with that name.\n");
    }
}


void calcul_age_statistics()
{
    int count_0_18 = 0, count_19_35 = 0, count_36_plus = 0;
    int total_age = 0;

    for (int i = 0; i < NB_Reserve; i++) 
    {
        total_age += ages[i];

        if (ages[i] <= 18) 
        {
            count_0_18++;
        } else if (ages[i] <= 35) 
        {
            count_19_35++;
        } 
        else 
        {
            count_36_plus++;
        }
    }

    double average_age;

    if (NB_Reserve > 0) {
        average_age = (double)total_age / NB_Reserve;
    } else {
        average_age = 0.0;
    }

    printf("\nStatistics by Age Group:\n");
    printf("Average Age of Patients: %.2f\n", average_age);
    printf("0-18 years: %d patients\n", count_0_18);
    printf("19-35 years: %d patients\n", count_19_35);
    printf("36+ years: %d patients\n", count_36_plus);
}

void calcul_status_statistics()
{
    int count_validated , count_postponed , count_canceled , count_processed = 0;

    for (int i = 0; i < NB_Reserve; i++) 
    {
        if (strcmp(status[i], "validated") == 0) 
        {
            count_validated++;
        } 
        else if (strcmp(status[i], "postponed") == 0) 
        {
            count_postponed++;
        } 
        else if (strcmp(status[i], "canceled") == 0) 
        {
            count_canceled++;
        } 
        else if (strcmp(status[i], "processed") == 0) 
        {
            count_processed++;
        }
    }

    printf("\nStatistics by Reservation Status:\n");
    printf("Validated: %d\n", count_validated);
    printf("Postponed: %d\n", count_postponed);
    printf("Canceled: %d\n", count_canceled);
    printf("Processed: %d\n", count_processed);
}

int main() 
{
    display_elements();
    int choice = 0;
    while (choice != 10)
    {
        printf("\nMenu:\n");
        printf("1. Add Reservation\n");
        printf("2. Display Reservations\n");
        printf("3. Modify Reservation\n");
        printf("4. Delete Reservation\n");
        printf("5. Search Reservation by id\n");
        printf("6. Search Reservation by Name\n");
        printf("7. Sort Reservations by Name\n");
        printf("8. Statistics - Age_group\n");
        printf("9. Statistics_Reservation_Status\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            add_reserve();
        } 
        else if (choice == 2) 
        {
            display_reserve();
        } 
        else if (choice == 3) 
        {
            modify_reserve();
        }
        else if (choice == 4)
        {
            delete_reserve();
        }
        else if (choice == 5) 
        {
            search_reserve_by_id();
        }
        else if (choice == 6) 
        {
            search_reserve_by_name();
        }
        else if (choice == 7) 
        {
            sort_reserves_by_name();
        }
        else if (choice == 8) 
        {
            calculate_age_statistics();
        }
        else if (choice == 9) 
        {
            calculate_status_statistics();
        }
        else if (choice == 10) 
        {
            printf("Exiting program.\n");
        }
        else 
        {
            printf("Invalid choice!!!!!!!!!!!!!\n");
        }
    }
    return 0;
}