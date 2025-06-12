#include <stdio.h>
int main() {
    int total_students, team_size, teams, leftover;

    printf("Enter total number of students: ");
    scanf("%d", &total_students);

    printf("Enter the team size: ");
    scanf("%d", &team_size);

    teams = total_students / team_size;
    leftover = total_students % team_size;

    printf("Number of teams: %d\n", teams);
    printf("Number of students in each team: %d\n", team_size);
    printf("Number of students left without a team: %d\n", leftover);

    return 0;
}