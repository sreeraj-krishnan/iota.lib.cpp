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

#pragma once

#include <iota/crypto/i_sponge.hpp>
#include <iota/crypto/keccak384.hpp>

namespace IOTA {

namespace Crypto {

class Kerl : public ISponge {
public:
  Kerl();
  virtual ~Kerl();

public:
  /**
   * Reset current state of the sponge.
   */
  void reset();

  /**
   * Absorb the input trits into the current state of the sponge.
   *
   * @param trits Input trits to be applied (absorbed) on current state of the sponge.
   * @param offset Offset at which the current state of the sponge should be modified.
   * @param length Length of the given input that should be used for absorption.
   */
  void absorb(const Types::Trits& trits, unsigned int offset = 0, unsigned int length = 0);

  /**
   * Squeeze the current state of the sponge to the given trits.
   *
   * @param trits Trits to be updated (squeezed) based on current state of the sponge.
   * @param offset Offset at which the trits should be modified.
   * @param length Length of the current state of the sponge that should be used for squeezing.
   */
  void squeeze(Types::Trits& trits, unsigned int offset = 0, unsigned int length = 0);

private:
  Keccak384 keccak_;
};

}  // namespace Crypto

}  // namespace IOTA
