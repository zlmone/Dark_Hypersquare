#include <cassert>
#include <iostream>
#include <chrono>
#include <vector>

#include "choiceweight.h"
#include "starting.h"
#include "game.h"
#include "enum_classes.h"
#include "hypersquare.h"
#include "hyperlevel.h"
#include "wektor.h"
#include "textout.h"
#include "functions.h"
#include "fibran.h"

int main()
{
    const int start_level
    { 25 };

    const unsigned seed
    { time_out() };

    std::cout << seed << '\n';

    fibran ranfib(seed, seed*seed);

    ranfib.display();

    const unsigned minim
    { 1000 };

    ranfib.step(minim);

    ranfib.display();

    starting starter;

    starter.run();

    game dark_hypersquare;

    dark_hypersquare.run();

    /*

    constexpr std::chrono::nanoseconds timestep(16000000);

    using clock = std::chrono::high_resolution_clock;

    std::chrono::nanoseconds lag(0);
    auto time_start = clock::now();
    bool quit_game = false;

    // game_state current_state;
    // game_state previous_state;

    const auto max_loop
    { 1000000 };

    auto loop
    { 0 };

    auto hyperkey
    { hypertype::none };

    const auto hyperlock
    { hypertype::level_up };

    std::vector <hypertype> hyperduo;

    hyperduo.push_back(hyperkey);
    hyperduo.push_back(hyperlock);

    const auto hyperduck
    { hyperduo };

    while (hyperkey != hyperlock)
    {
        auto delta_time = clock::now() - time_start;
        time_start = clock::now();
        lag += std::chrono::duration_cast<std::chrono::nanoseconds>(delta_time);

        // quit_game = handle_events();

        // update game logic as lag permits
        while(lag >= timestep)
        {
            lag -= timestep;

            // previous_state = current_state;
            // update(&current_state); // update at a fixed rate each time
        }

        // calculate how close or far we are from the next timestep
        auto alpha = (float) lag.count() / timestep.count();
        // auto interpolated_state = interpolate(current_state, previous_state, alpha);

        // render(interpolated_state);

        ++loop;

        if (loop >= max_loop)
        { hyperkey = hyperlock; }
    }

    wektor wek(31, 42);

    wek.out();

    wektor wak(60, 50);

    wak.out();

    wektor wok;

    wok = wek - wak;


    wok.out();

    wek -= -wok;

    wek.out();

    const hypertype randy
    { rand_type() };

    hypersquare quart({3, 5}, true);

    textout(quart.get_color());

    const hypertype hype
    { rand_type() };

    textout(type_to_color(hype));

    std::cout << '\n';

    */

    // 700
    // 200
    // 70
    // 30


    const std::vector<hypertype> chosen
    { choice_vector() };

    std::vector<unsigned> weights;
    {
        weights.push_back(2000);
        weights.push_back(2000);
        weights.push_back(4500);
        weights.push_back(840);
        weights.push_back(240);
        weights.push_back(84);
        weights.push_back(36);
        weights.push_back(240);
        weights.push_back(60);
    }

    // for (int count {2}; count < 6; ++count)
    // { weights[count] = 0; }

    // std::vector<choiceweight> choights
    // (select_weights(choices, weights));

    hyperlevel verev
    (start_level, weights[3], choights, ranfib);

    hyperlevel rever
    { start_level, false, ranfib };

    rever.textdisp();

    std::cout << (unsigned)hypertype::player << '\n';

    verev.textdisp();

    return 0;
}
