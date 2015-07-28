//
//  x86_tests.h
//  x86Emulator
//
//  Created by Félix on 2015-04-26.
//  Copyright (c) 2015 Félix Cloutier. All rights reserved.
//

#ifndef DECLARE_TEST
# define DECLARE_TEST(x)
#endif

DECLARE_TEST(adc32)
DECLARE_TEST(adc64)
DECLARE_TEST(and32)
DECLARE_TEST(and64)
DECLARE_TEST(call)
DECLARE_TEST(cdq)
DECLARE_TEST(cdqe)
DECLARE_TEST(cqo)
DECLARE_TEST(cmov)
DECLARE_TEST(cmp)
DECLARE_TEST(dec)
DECLARE_TEST(idiv16_quotient)
DECLARE_TEST(idiv16_remainder)
DECLARE_TEST(idiv128_quotient)
DECLARE_TEST(idiv128_remainder)
DECLARE_TEST(imul32)
DECLARE_TEST(imul64)
DECLARE_TEST(imul128)
DECLARE_TEST(inc)
DECLARE_TEST(j)
DECLARE_TEST(jcxz)
DECLARE_TEST(lea)
DECLARE_TEST(leave)
DECLARE_TEST(mov8)
DECLARE_TEST(mov16)
DECLARE_TEST(mov32)
DECLARE_TEST(mov64)
DECLARE_TEST(movzx8_16)
DECLARE_TEST(movzx16_64)
DECLARE_TEST(movsx)
DECLARE_TEST(movsxd)
DECLARE_TEST(not)
DECLARE_TEST(or)
DECLARE_TEST(pop)
DECLARE_TEST(push)
DECLARE_TEST(ror1)
DECLARE_TEST(ror)
DECLARE_TEST(sar1)
DECLARE_TEST(sar)
DECLARE_TEST(sbb32)
DECLARE_TEST(sbb64)
DECLARE_TEST(seta)
DECLARE_TEST(setae)
DECLARE_TEST(setb)
DECLARE_TEST(setbe)
DECLARE_TEST(sete)
DECLARE_TEST(setg)
DECLARE_TEST(setge)
DECLARE_TEST(setl)
DECLARE_TEST(setle)
DECLARE_TEST(setne)
DECLARE_TEST(setno)
DECLARE_TEST(setnp)
DECLARE_TEST(setns)
DECLARE_TEST(seto)
DECLARE_TEST(setp)
DECLARE_TEST(sets)
DECLARE_TEST(shl1)
DECLARE_TEST(shl)
DECLARE_TEST(shr1)
DECLARE_TEST(shr)
DECLARE_TEST(stc)
DECLARE_TEST(sub32)
DECLARE_TEST(sub64)
DECLARE_TEST(test)
DECLARE_TEST(xor)

#undef DECLARE_TEST