#include "tb_defines.hpp"

zoneList[] =
{
//ID TEAM          SPAWNTYPE      LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0         ,    {}         , {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE   , SPAWN_XRAY,    {2}        , {}    , 1      , {}        , 0    , "%3" },

{ 2, TEAM_BLUE   , SPAWN_NEVER,   {1,3}      , {}    , 1      , {}        , 0    , "Farm" },
{ 3, TEAM_NEUTRAL, SPAWN_NEVER,   {2,4}      , {}    , 1      , {}        , 0    , "Ghost Town" },

{ 4, TEAM_NEUTRAL, SPAWN_NEVER,   {3,5}      , {}    , 1      , {}        , 0    , "Crashsite" },
{ 5, TEAM_NEUTRAL, SPAWN_NEVER,   {4,6}      , {}    , 1      , {}        , 0    , "Gas Station" },
{ 6, TEAM_RED, SPAWN_NEVER,   {5,7}      , {}    , 1      , {}        , 0    , "Roadblock" },

{ 7, TEAM_RED    , SPAWN_XRAY,    {6}        , {}    , 1      , {}        , 0    , "%3" },

{ 8, TEAM_BLUE, SPAWN_INSTANT,   {}      , {}    , 1      , {1,3}        , 2    , "%1" },
{ 9, TEAM_RED, SPAWN_INSTANT,   {}      , {}    , 1      , {5,7}        , 2    , "%1" }


};
