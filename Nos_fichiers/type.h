#pragma once

#ifndef TYPE_H
#define TYPE_H
/*!
* @file type.h
* @brief Definition of usefull types or aliases for the project
* @author Maxime Minguella
* @version 1.0
* @date 10 janvier 2019
*/

#include <string>
#include <vector>
#include <map>

/**
* @brief CVLine : alias to a line of the matrix
*/
typedef std::vector <unsigned> CVLine;

/**
* @brief CMat : alias to a game grid type
* @typedef std::vector <CVLine> CMat;
*/
typedef std::vector <CVLine> CMatrix;

/**
* @brief CPosition : a pair gathering the coordinates in the grid
*/
typedef std::pair <unsigned, unsigned> CPosition;

/**
* @brief Struct containing all the game's parameters
*/
struct CConfig {
    /** List of parameters of type char */
    std::map <std::string, char> MapParamChar;
    /** List of parameters of type unsigned */
    std::map <std::string, unsigned> MapParamUnsigned;
    /** List of parameters of type string */
    std::map <std::string, std::string> MapParamString;
};

/**
* @brief Struct containing all the authorized keys in the struct CMyParam
*/
struct AuthorizedKey {
    /** List of authorized key for the type char in a struct CConfig */
    const std::vector <std::string> VParamChar { "KeyUp", "KeyDown", "KeyLeft", "KeyRight", "KeyUpLeft",
                                                 "KeyUpRight", "KeyDownLeft", "KeyDownRight", "KTokenPlayer1",
                                                 "KTokenPlayer2", "KEmpty" };
    /** List of authorized key for the type string in a struct CConfig */
    const std::vector <std::string> VParamString { "LineColor", "RowColor", "IndexColor", "KColorPlayer1",
                                                   "KColorPlayer2", "BorderColor" };
    /** List of authorized key for the type unsigned in a struct CConfig */
    const std::vector <std::string> VParamUnsigned { "GridSize" , "GridMin", "GridMax" };
};

/**
* @brief KAuthorizedKey
*/
const AuthorizedKey KAuthorizedKey;

/**
* @brief KColor : map between the "human" color and its correspondence for the Unix terminal
*/

const std::map <std::string, std::string> KColor
{
    { "KReset", "0" },
    { "KBlack", "30" },
    { "KRed", "31" },
    { "KGreen", "32" },
    { "KYellow", "33" },
    { "KBlue", "34" },
    { "KMagenta", "35" },
    { "KCyan", "36" }
};

#endif // TYPE_H
