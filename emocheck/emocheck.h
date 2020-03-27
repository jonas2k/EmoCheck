/*
 * LICENSE
 * Please refer to the LICENSE.txt at https://github.com/JPCERTCC/EmoCheck/
 */

#ifndef EMOCHECK_EMOCHECK_H_
#define EMOCHECK_EMOCHECK_H_

// standard module
#include <vector>
#include <tuple>
#include <string>

namespace emocheck {

static char EMOCHECK_VERSION[] = "0.0.2";
static char EMOCHECK_RELEASE_DATE[] = "2020/02/10";
static char EMOCHECK_URL[] = "https://github.com/JPCERTCC/EmoCheck";
static char LINE_DELIMITER[] =
    "____________________________________________________\n";

const unsigned short int LANG_ID_JP = 0x0411;

struct EmotetProcess {
    std::string process_name;
    int pid;
    std::string image_path;
};

std::string WideCharToString(wchar_t *wide_char);
std::tuple<int,std::vector<EmotetProcess>> ScanEmotet(bool);

}  //namespace emocheck

#endif  //EMOCHECK_EMOCHECK_H;_