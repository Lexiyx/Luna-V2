
#pragma once

#include "..\..\includes.hpp"
#include "..\..\sdk\structs.hpp"

class bullettracers : public singleton <bullettracers>
{


    struct impact_data
    {
        player_t* e;
        Vector impact_position;
        float time;
    };

    std::vector <impact_data> impacts;
public:
    void draw_beam(bool local_tracer, const Vector& src, const Vector& end, Color color, bool nade);
    void events(IGameEvent* event);
    void draw_beams();
};