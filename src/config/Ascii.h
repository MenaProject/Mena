// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =

//    __  __                  
//   |  \/  |                 
//   | \  / | ___ _ __   __ _ 
//   | |\/| |/ _ \ '_ \ / _` |
//   | |  | |  __/ | | | (_| |
//   |_|  |_|\___|_| |_|\__,_|
//                            
//                            


const std::string nonWindowsAsciiArt =

//   .----------------.  .----------------.  .-----------------. .----------------. 
//  | .--------------. || .--------------. || .--------------. || .--------------. |
//  | | ____    ____ | || |  _________   | || | ____  _____  | || |      __      | |
//  | ||_   \  /   _|| || | |_   ___  |  | || ||_   \|_   _| | || |     /  \     | |
//  | |  |   \/   |  | || |   | |_  \_|  | || |  |   \ | |   | || |    / /\ \    | |
//  | |  | |\  /| |  | || |   |  _|  _   | || |  | |\ \| |   | || |   / ____ \   | |
//  | | _| |_\/_| |_ | || |  _| |___/ |  | || | _| |_\   |_  | || | _/ /    \ \_ | |
//  | ||_____||_____|| || | |_________|  | || ||_____|\____| | || ||____|  |____|| |
//  | |              | || |              | || |              | || |              | |
//  | '--------------' || '--------------' || '--------------' || '--------------' |
//   '----------------'  '----------------'  '----------------'  '----------------' 


/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
