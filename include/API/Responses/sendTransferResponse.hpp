//
// MIT License
//
// Copyright (c) 2017 Thibault Martinez
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

#pragma once

#include <API/Responses/genericResponse.hpp>

#include <vector>

class sendTransferResponse : public genericResponse {
public:
  /**
   * default ctor
   */
  sendTransferResponse() = default;

  /**
   * full init ctor
   */
  sendTransferResponse(const std::vector<bool>& successful, long duration);

  /**
   * default dtor
   */
  ~sendTransferResponse() = default;

public:
  /**
   * @return successful operations.
   */
  const std::vector<bool>& getSuccessfully() const;

  /**
   * @return successful operations (non-const version).
   */
  std::vector<bool>& getSuccessfully();

  /**
   * @param successful new array of successful operations for sendTransfer response
   */
  void setSuccessfully(const std::vector<bool>& successful);

private:
  std::vector<bool> successfully_;
};
