/**
 * @file Sphynx.h
 * @brief This file includes all the necessairy headers to use the Sphynx %Engine. 
 * If you want to define your own entry point add before this header 
 * @code {.cpp}
 * #define Exclude_Entrypoint //To stop the engine from defining it's own entrypoint.
 * @endcode
 *  
 * @author TheSphynx/TheSphynxoid
 * 
 * @copyright Copyright (c) 2025
 */
#pragma once
#ifdef Exclude_Entrypoint
#include <iostream>
#include <Engine.h>
#include <Logger.h>
#else
#include <EntryPoint.h>
#endif