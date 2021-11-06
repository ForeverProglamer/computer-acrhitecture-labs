#include <stdio.h>
#include <getopt.h>


int main (int argc, char *argv[]){

    const char* short_options = "ahje::s:";

    const struct option long_options[] = {
            {"all", no_argument, NULL, 'a'},
            {"echo",optional_argument,NULL,'e'},
            {"help",no_argument,NULL,'h'},
            {"just-do-it", no_argument, NULL, 'j'},
            {"save",required_argument,NULL,'s'},
            {NULL,0,NULL,0}
    };

    bool a_option_is_allowed = true;
    bool e_option_is_allowed = true;
    bool h_option_is_allowed = true;
    bool j_option_is_allowed = true;
    bool s_option_is_allowed = true;

    int rez;
    int option_index = -1;

    while ((rez=getopt_long(argc, argv, short_options, long_options, &option_index))!=-1) {
        switch(rez){
            case 'a':
                if (a_option_is_allowed) {
                    printf("Parameters list:\n-a or --all\n-e or --echo\n-h or --help\n-j or --just-do-it\n-s or --save\n");

                    a_option_is_allowed = false;
                }
                break;

            case 'e':
                if (e_option_is_allowed) {
                    if (optarg!=NULL)
                        printf("You echoed this: %s\n", optarg);
                    else
                        printf("There is nothing to echo :(\n");

                    e_option_is_allowed = false;
                }
                break;

            case 'h':
                if (h_option_is_allowed) {
                    printf("You`ve specified help option, but help is deprecated. Use -j or --just-do-it instead...\n");
                    if (option_index < 0)
                        printf("Short help option\n");
                    else
                        printf("Long help option\n");

                    h_option_is_allowed = false;
                }
                break;

            case 'j':
                if (j_option_is_allowed) {
                    printf("Pull yourself together man, you`re need no help.\n");

                    j_option_is_allowed = false;
                }
                break;

            case 's':
                if (s_option_is_allowed) {
                    printf("Saving data to = %s\n", optarg);

                    s_option_is_allowed = false;
                }
                break;

            case '?': default:
                printf("Take a look at options list and stop specifying wrong parameters!\n");
                break;

        };
        option_index = -1;
    };
    return 0;
};
