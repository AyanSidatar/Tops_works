#include <stdio.h>

struct Bio
{
    char description[150];
    int age;
};

struct InstaProfile
{
    char username[50];
    int followers;
    struct Bio profileBio;
};

int main()
{

    struct InstaProfile myProfile = {
        "coder_guy99",
        1250,
        {"Coffee lover | Tech enthusiast | Building projects in C.",
         21}};

    printf("--- Instagram Profile Details ---\n");
    printf("Username:    @%s\n", myProfile.username);
    printf("Followers:   %d\n", myProfile.followers);
    printf("Bio Details:\n");
    printf("  - Desc:    %s\n", myProfile.profileBio.description);
    printf("  - Age:     %d\n", myProfile.profileBio.age);

    return 0;
}