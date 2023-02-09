#include <stdio.h>
#include <stdint.h>

int main()
{
    // level: the level of the attacking Pokémon.
    // atk: the Attack value of the attacking Pokémon.
    // def: the Defense value of the target Pokémon.
    // power: the power of the used move.
    int32_t level = 0;
    double atk = 0.0;
    int32_t atk_type = 0;
    int32_t status = 0;
    int32_t move_power = 0;
    int32_t move_type = 0;
    int32_t move_category = 0;

    printf("Attacker\n\tlevel: ");
    scanf("%d", &level);
    printf("\tatk: ");
    scanf("%lf", &atk);
    printf("\ttype: ");
    scanf("%d", &atk_type);
    printf("\tstatus: ");
    scanf("%d", &status);
    printf("\tmove power: ");
    scanf("%d", &move_power);
    printf("\tmove type: ");
    scanf("%d", &move_type);
    printf("\tmove category: ");
    scanf("%d", &move_category);
    printf("\n");

    double def = 0.0;
    int32_t tar_type = 0;
    printf("Target\n\tdef: ");
    scanf("%lf", &def);
    printf("\ttype: ");
    scanf("%d", &tar_type);

    int32_t weather = 0.0;
    double terrain = 0;
    printf("Environment\n\tweather: ");
    scanf("%d", &weather);
    printf("\tterrain: ");
    scanf("%lf", &terrain);

    /* ERROR */
    if (atk == 0 | def == 0)
    {
        printf("def, atk are nonzero natural number\n");
    }
    else if ((level <= 0 && level > 100))
    {
        printf("level should be an integer in interval [1, 100]\n");
    }
    if (move_power <= 0)
    {
        printf("move power should be nonzero natural number\n");
    }
    if (move_category != 1 && move_category != 0)
    {
        printf("move category should be either 0 or 1\n");
    }
    if (atk_type != 0 && atk_type != 1 && atk_type != 2 && atk_type != 3 && atk_type != 4 && atk_type != 5 && atk_type != 6 && atk_type != 7)
    {
        printf("attack type should be 0-7\n");
    }
    if (tar_type != 0 && tar_type != 1 && tar_type != 2 && tar_type != 3 && tar_type != 4 && tar_type != 5 && tar_type != 6 && tar_type != 7)
    {
        printf("target type should be 0-7\n");
    }
    if (move_type != 0 && move_type != 1 && move_type != 2 && move_type != 3 && move_type != 4 && move_type != 5 && move_type != 6 && move_type != 7)
    {
        printf("move type should be 0-7\n");
    }
    else
    {
        //* the effects depends on the moves’ type *
        //  weather: 0 none 1 sunny 2 rain 3 cloudy 4 windy 5 sandstorm affected by move type
        double weather_effect = 1.0;
        // weather = sunny water-->0.5 fire-->2
        if (weather == 1 && move_type == 0) // water
            weather_effect = 0.5;
        if (weather == 1 && move_type == 1) // fire
            weather_effect = 2;
        // weather = rain water-->2 fire-->0.5
        if (weather == 2 && move_type == 0)
            weather_effect = 2;
        if (weather == 2 && move_type == 1)
            weather_effect = 0.5;
        // stab: same type atk bonus
        double stab = 1.0;
        if (move_type == atk_type)
            stab = 2;
        else
            stab = 1;
        //* the effects depends on the atk type *
        // type_effect: 0 water 1 fire 2 grass 3 flying 4 rock 5 ground 6 electric 7 dragon
        double type_effect = 1.0;
        if (move_type == 0 && tar_type == 0)
            type_effect = 0.5;
        if (move_type == 0 && tar_type == 1)
            type_effect = 2;
        if (move_type == 0 && tar_type == 2)
            type_effect = 0.5;
        if (move_type == 0 && tar_type == 3)
            type_effect = 1;
        if (move_type == 0 && tar_type == 4)
            type_effect = 2;
        if (move_type == 0 && tar_type == 5)
            type_effect = 2;
        if (move_type == 0 && tar_type == 6)
            type_effect = 1;
        if (move_type == 0 && tar_type == 7)
            type_effect = 0.5;

        if (move_type == 1 && tar_type == 0)
            type_effect = 0.5;
        if (move_type == 1 && tar_type == 1)
            type_effect = 0.5;
        if (move_type == 1 && tar_type == 2)
            type_effect = 2;
        if (move_type == 1 && tar_type == 3)
            type_effect = 1;
        if (move_type == 1 && tar_type == 4)
            type_effect = 0.5;
        if (move_type == 1 && tar_type == 5)
            type_effect = 1;
        if (move_type == 1 && tar_type == 6)
            type_effect = 1;
        if (move_type == 1 && tar_type == 7)
            type_effect = 0.5;

        if (move_type == 2 && tar_type == 0)
            type_effect = 2;
        if (move_type == 2 && tar_type == 1)
            type_effect = 0.5;
        if (move_type == 2 && tar_type == 2)
            type_effect = 0.5;
        if (move_type == 2 && tar_type == 3)
            type_effect = 0.5;
        if (move_type == 2 && tar_type == 4)
            type_effect = 2;
        if (move_type == 2 && tar_type == 5)
            type_effect = 2;
        if (move_type == 2 && tar_type == 6)
            type_effect = 1;
        if (move_type == 2 && tar_type == 7)
            type_effect = 0.5;

        if (move_type == 3 && tar_type == 0)
            type_effect = 1;
        if (move_type == 3 && tar_type == 1)
            type_effect = 1;
        if (move_type == 3 && tar_type == 2)
            type_effect = 2;
        if (move_type == 3 && tar_type == 3)
            type_effect = 1;
        if (move_type == 3 && tar_type == 4)
            type_effect = 0.5;
        if (move_type == 3 && tar_type == 5)
            type_effect = 1;
        if (move_type == 3 && tar_type == 6)
            type_effect = 0.5;
        if (move_type == 3 && tar_type == 7)
            type_effect = 1;

        if (move_type == 4 && tar_type == 0)
            type_effect = 1;
        if (move_type == 4 && tar_type == 1)
            type_effect = 2;
        if (move_type == 4 && tar_type == 2)
            type_effect = 1;
        if (move_type == 4 && tar_type == 3)
            type_effect = 2;
        if (move_type == 4 && tar_type == 4)
            type_effect = 1;
        if (move_type == 4 && tar_type == 5)
            type_effect = 0.5;
        if (move_type == 4 && tar_type == 6)
            type_effect = 1;
        if (move_type == 4 && tar_type == 7)
            type_effect = 1;

        if (move_type == 5 && tar_type == 0)
            type_effect = 1;
        if (move_type == 5 && tar_type == 1)
            type_effect = 2;
        if (move_type == 5 && tar_type == 2)
            type_effect = 1;
        if (move_type == 5 && tar_type == 3)
            type_effect = 0;
        if (move_type == 5 && tar_type == 4)
            type_effect = 2;
        if (move_type == 5 && tar_type == 5)
            type_effect = 1;
        if (move_type == 5 && tar_type == 6)
            type_effect = 2;
        if (move_type == 5 && tar_type == 7)
            type_effect = 1;

        if (move_type == 6 && tar_type == 0)
            type_effect = 2;
        if (move_type == 6 && tar_type == 1)
            type_effect = 1;
        if (move_type == 6 && tar_type == 2)
            type_effect = 0.5;
        if (move_type == 6 && tar_type == 3)
            type_effect = 2;
        if (move_type == 6 && tar_type == 4)
            type_effect = 1;
        if (move_type == 6 && tar_type == 5)
            type_effect = 0;
        if (move_type == 6 && tar_type == 6)
            type_effect = 0.5;
        if (move_type == 6 && tar_type == 7)
            type_effect = 0.5;

        if (move_type == 7 && tar_type == 0)
            type_effect = 1;
        if (move_type == 7 && tar_type == 1)
            type_effect = 1;
        if (move_type == 7 && tar_type == 2)
            type_effect = 1;
        if (move_type == 7 && tar_type == 3)
            type_effect = 1;
        if (move_type == 7 && tar_type == 4)
            type_effect = 1;
        if (move_type == 7 && tar_type == 5)
            type_effect = 1;
        if (move_type == 7 && tar_type == 6)
            type_effect = 1;
        if (move_type == 7 && tar_type == 7)
            type_effect = 2;

        //* def & atk bonus *
        // In the sandstorm (5), rock-type Pokémons’ def is doubled.
        // In the rain(2), ground-type Pokémons’ def is halved.
        if (weather == 5 && tar_type == 4)
        {
            def = def * 2;
        }
        if (weather == 2 && tar_type == 5)
        {
            def = def / 2;
        }
        // In the cloudy(3), grass-type(2) Pokémons’ atk is halved.
        // In the windy(4), flying-type(3) Pokémons’ atk is doubled.
        if (weather == 3 && atk_type == 2)
        {
            atk = atk / 2;
        }
        if (weather == 4 && atk_type == 3)
        {
            atk = atk * 2;
        }
        // Every move deals at least 1 damage, unless the type_effect is ”not effective”
        //  status 0 none 1 burn 2 frostbite
        double status_effect = 1.0;
        if (status == 1 && move_category == 0)
            status_effect = 0.5;
        if (status == 2 && move_category == 1)
            status_effect = 0.5;
        // terrain 0 none 1 grassy 2 electric 3 misty to atk_type 2 grass 6 electric 7 dragon
        // details are given by tables below, note that the effects depends on the moves’ type, and terrain doesn’t affect flying-type Pokémons.

        double terrain_effect = 1.0;
        if (move_type == 2 && terrain == 1)
            terrain_effect = 2;
        if (move_type == 6 && terrain == 2)
            terrain_effect = 2;
        if (move_type == 7 && terrain == 3)
            terrain_effect = 0.5;
        // factor=(double) weather * stab * type * status * terrain;
        double damage = 0;
        double damage_factor = 0;
        int damage_int = 0;
        int damage_int2 = 0;
        double factor = 2;
        factor = (double)weather_effect * stab * type_effect * status_effect * terrain_effect;

        damage = (double)((level * 2 + 10) * atk * move_power / 250 / def + 2);
        damage_int = damage;
        damage_factor = (double)damage_int * factor;
        damage_int2 = damage_factor;
        // printf("factor --> %.1f * %.1f * %.1f * %.1f * %.1f \n", weather_effect, stab, type_effect, status_effect, terrain_effect);
        printf("Damage --> %d\n", damage_int2);
    }
    return 0;
}