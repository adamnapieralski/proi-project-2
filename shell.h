/*
 * Name: shell.h
 * Purpose: Custom library header file with class for chess pieces and board classes
 * @author Adam Napieralski
 * @version 0.2 29/03/2019
 */
#ifndef SHELL_H
#define SHELL_H

#include "chess.h"

namespace shell{
    class Shell{
    public:
        chess::Board inputBoard;
        std::array<int, PIECES_TYPES> piecesConfig;
        std::array<std::string, PIECES_TYPES> piecesNames = {"Pionek", "Wieza", "Goniec", "Kon", "Hetman", "Krol"};
        bool printAll;
        void setInputBoard();
        void setPiecesConfig();
        void setPrintAll();
        void displayMainMenu();
        void displaySettings();
        void displayDescription();
        bool exeMenu();
        int getChoice();
    };
}

#endif //SHELL_H