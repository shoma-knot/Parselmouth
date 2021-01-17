/*
 * Copyright (C) 2016-2021  Yannick Jadoul
 *
 * This file is part of Parselmouth.
 *
 * Parselmouth is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Parselmouth is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Parselmouth.  If not, see <http://www.gnu.org/licenses/>
 */

#pragma once
#ifndef INC_PARSELMOUTH_STRINGUTILS_H
#define INC_PARSELMOUTH_STRINGUTILS_H

#include <string>

namespace parselmouth {

inline bool startsWith(std::u32string_view string, std::u32string_view prefix) {
	return string.compare(0, prefix.length(), prefix) == 0;
}

inline bool endsWith(std::u32string_view string, std::u32string_view suffix) {
	return suffix.length() <= string.length() && string.compare(string.length() - suffix.length(), std::u32string::npos, suffix) == 0;
}

} // namespace parselmouth

#endif // INC_PARSELMOUTH_STRINGUTILS_H
