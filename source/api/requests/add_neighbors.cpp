//
// MIT License
//
// Copyright (c) 2017-2018 Thibault Martinez and Simon Ninon
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
//

#include <iota/api/requests/add_neighbors.hpp>

namespace IOTA {

namespace API {

namespace Requests {

AddNeighbors::AddNeighbors(const std::vector<std::string>& uris)
    : Base("addNeighbors"), uris_(uris) {
}

const std::vector<std::string>&
AddNeighbors::getUris() const {
  return uris_;
}

std::vector<std::string>&
AddNeighbors::getUris() {
  return uris_;
}

void
AddNeighbors::setUris(const std::vector<std::string>& uris) {
  uris_ = uris;
}

void
AddNeighbors::serialize(json& data) {
  Base::serialize(data);
  data["uris"] = uris_;
}

}  // namespace Requests

}  // namespace API

}  // namespace IOTA
