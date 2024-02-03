#pragma once

#include <vector>
#include <array>

#include "MemData.h"
#include "SaveBase.h"

class SavePart2 : public SaveInterface
{
public:
	SavePart2() = default;
	bool Parse(FileWalker &fw)
	{
		if (!check()) return false;

		m_var1  = fw.ReadByte();
		m_var2  = fw.ReadByte();
		m_var3  = fw.ReadDWord();
		m_var4  = fw.ReadDWord();
		m_var5  = fw.ReadDWord();
		m_var6  = fw.ReadDWord();
		m_var7  = fw.ReadDWord();
		m_var8  = fw.ReadDWord();
		m_var9  = fw.ReadDWord();
		m_var10 = fw.ReadDWord();
		m_var11 = fw.ReadDWord();
		m_var12 = fw.ReadDWord();
		m_var13 = fw.ReadDWord();
		m_var14 = fw.ReadDWord();
		m_var15 = fw.ReadDWord();
		m_var16 = fw.ReadDWord();
		m_var17 = fw.ReadDWord();
		m_var18 = fw.ReadDWord();
		m_var19 = fw.ReadDWord();
		m_var20 = fw.ReadDWord();
		m_var21 = fw.ReadDWord();
		m_var22 = fw.ReadWord();
		m_var23 = fw.ReadWord();
		m_var24 = fw.ReadWord();
		m_var25 = fw.ReadDWord();
		m_var26 = fw.ReadWord();
		m_var27 = fw.ReadWord();
		m_var28 = fw.ReadWord();
		m_var29 = fw.ReadDWord();
		m_var30 = fw.ReadDWord();
		m_var31 = fw.ReadDWord();
		m_var32 = fw.ReadDWord();
		m_var33 = fw.ReadDWord();
		m_var34 = fw.ReadDWord();
		m_var35 = fw.ReadDWord();
		m_var36 = fw.ReadDWord();
		m_var37 = fw.ReadDWord();
		m_var38 = fw.ReadByte();
		m_var39 = fw.ReadWord();
		m_var40 = fw.ReadDWord();
		m_var41 = fw.ReadDWord();
		m_var42 = fw.ReadWord();
		m_var43 = fw.ReadWord();
		m_var44 = fw.ReadWord();
		m_var45 = fw.ReadWord();
		m_var46 = fw.ReadDWord();
		m_var47 = fw.ReadDWord();
		m_var48 = fw.ReadDWord();
		m_var49 = fw.ReadByte();

		if (m_fileVersion <= 96)
			m_var50 = fw.ReadDWord();

		m_var51 = fw.ReadDWord();

		if (m_fileVersion >= 98)
		{
			m_var52 = fw.ReadDWord();
			m_var53 = fw.ReadDWord();
		}

		if (m_fileVersion >= 100)
		{
			m_var54 = fw.ReadDWord();
			m_var55 = fw.ReadDWord();
			m_var56 = fw.ReadByte();

			m_var57 = fw.ReadDWord();

			if ((int)m_var57 > 0)
			{
				for (DWORD i = 0; i < m_var57; i++)
				{
					MemData<DWORD> memData;
					initMemData(memData, fw);
					m_mds1.push_back(memData);
				}
			}

			m_var58 = fw.ReadDWord();

			if ((int)m_var58 > 0)
			{
				for (DWORD i = 0; i < m_var58; i++)
					m_vars1.push_back(fw.ReadDWord());
			}

			m_var59 = fw.ReadDWord();
			m_var60 = fw.ReadDWord();
			m_var61 = fw.ReadDWord();
			m_var62 = fw.ReadDWord();
			m_var63 = fw.ReadDWord();
		}
		if (m_fileVersion >= 101)
		{
			m_var64 = fw.ReadDWord();
			m_var65 = fw.ReadDWord();
			m_var66 = fw.ReadDWord();
			m_var67 = fw.ReadDWord();
			m_var68 = fw.ReadDWord();
			m_var69 = fw.ReadDWord();
		}
		if (m_fileVersion >= 102)
			m_var70 = fw.ReadWord();

		if (m_fileVersion >= 103)
		{
			initMemData(m_md1, fw);

			initMemData(m_md2, fw);
		}

		if (m_fileVersion >= 104)
			m_var71 = fw.ReadDWord();

		if (m_fileVersion >= 106)
		{
			m_var72 = fw.ReadDWord();
			m_var73 = fw.ReadDWord();
			m_var74 = fw.ReadDWord();
		}

		if (m_fileVersion >= 108)
		{
			initMemData(m_md3, fw);

			m_var75 = fw.ReadDWord();
			m_var76 = fw.ReadDWord();
			m_var77 = fw.ReadDWord();

			initMemData(m_md4, fw);

			m_var78 = fw.ReadDWord();
			m_var79 = fw.ReadDWord();
			m_var80 = fw.ReadDWord();
		}

		if (m_fileVersion >= 109)
		{
			initMemData(m_md5, fw);

			initMemData(m_md6, fw);

			m_var81 = fw.ReadByte();
		}

		if (m_fileVersion >= 110)
			m_var82 = fw.ReadByte();

		if (m_fileVersion >= 119)
		{
			initMemData(m_md7, fw);

			initMemData(m_md8, fw);

			initMemData(m_md9, fw);
		}

		if (m_fileVersion >= 121)
			m_var83 = fw.ReadDWord();

		if (m_fileVersion >= 122)
			m_var84 = fw.ReadDWord();

		if (m_fileVersion >= 124)
			m_var85 = fw.ReadDWord();

		if (m_fileVersion >= 126)
			m_var86 = fw.ReadDWord();

		if (m_fileVersion >= 128)
			m_var87 = fw.ReadDWord();

		if (m_fileVersion >= 129)
		{
			m_var88 = fw.ReadDWord();
			m_var89 = fw.ReadDWord();
		}

		if (m_fileVersion >= 130)
			m_var90 = fw.ReadDWord();

		if (m_fileVersion >= 131)
			m_var91 = fw.ReadDWord();

		if (m_fileVersion >= 132)
		{
			m_var92 = fw.ReadDWord();
			m_var93 = fw.ReadDWord();
			m_var94 = fw.ReadDWord();
			m_var95 = fw.ReadDWord();
		}

		if (m_fileVersion >= 134)
			m_var96 = fw.ReadByte();

		if (m_fileVersion >= 136)
			m_var97 = fw.ReadByte();

		if (m_fileVersion >= 137)
		{
			m_var98  = fw.ReadDWord();
			m_var99  = fw.ReadDWord();
			m_var100 = fw.ReadDWord();
			m_var101 = fw.ReadDWord();

			for (DWORD i = 0; i < 2; i++)
			{
				m_vars2.push_back(fw.ReadDWord());
				m_vars2.push_back(fw.ReadDWord());
				m_vars2.push_back(fw.ReadDWord());
				m_vars2.push_back(fw.ReadDWord());
				m_vars2.push_back(fw.ReadDWord());
				m_vars2.push_back(fw.ReadDWord());
				m_vars2.push_back(fw.ReadDWord());
				m_vars2.push_back(fw.ReadDWord());
				m_vars2.push_back(fw.ReadDWord());
				m_vars2.push_back(fw.ReadDWord());
				m_vars2.push_back(fw.ReadDWord());
				m_vars2.push_back(fw.ReadDWord());
			}
		}

		if (m_fileVersion >= 0x8A)
		{
			m_var102 = fw.ReadDWord();
			m_var103 = fw.ReadDWord();
			m_var104 = fw.ReadDWord();
			m_var105 = fw.ReadDWord();

			initMemData(m_md10, fw);

			m_var106 = fw.ReadDWord();

			if ((int)m_var106 > 0)
			{
				for (DWORD i = 0; i < m_var106; i++)
				{
					MemData<DWORD> memData;
					initMemData(memData, fw);
					m_mds2.push_back(memData);
				}
			}
		}

		if (m_fileVersion < 0x8D) return true;

		m_var107 = fw.ReadByte();
		m_var108 = fw.ReadByte();
		m_var109 = fw.ReadByte();
		m_var110 = fw.ReadByte();
		m_var111 = fw.ReadByte();
		m_var112 = fw.ReadByte();
		m_var113 = fw.ReadByte();
		m_var114 = fw.ReadByte();
		m_var115 = fw.ReadByte();
		m_var116 = fw.ReadByte();
		m_var117 = fw.ReadByte();
		m_var118 = fw.ReadByte();
		m_var119 = fw.ReadByte();
		m_var120 = fw.ReadByte();

		fw.ReadBytesArr(m_bytes);

		m_var121 = fw.ReadByte();
		m_var122 = fw.ReadByte();
		return true;
	}

private:
	BYTE m_var1    = 0;
	BYTE m_var2    = 0;
	DWORD m_var3   = 0;
	DWORD m_var4   = 0;
	DWORD m_var5   = 0;
	DWORD m_var6   = 0;
	DWORD m_var7   = 0;
	DWORD m_var8   = 0;
	DWORD m_var9   = 0;
	DWORD m_var10  = 0;
	DWORD m_var11  = 0;
	DWORD m_var12  = 0;
	DWORD m_var13  = 0;
	DWORD m_var14  = 0;
	DWORD m_var15  = 0;
	DWORD m_var16  = 0;
	DWORD m_var17  = 0;
	DWORD m_var18  = 0;
	DWORD m_var19  = 0;
	DWORD m_var20  = 0;
	DWORD m_var21  = 0;
	WORD m_var22   = 0;
	WORD m_var23   = 0;
	WORD m_var24   = 0;
	DWORD m_var25  = 0;
	WORD m_var26   = 0;
	WORD m_var27   = 0;
	WORD m_var28   = 0;
	DWORD m_var29  = 0;
	DWORD m_var30  = 0;
	DWORD m_var31  = 0;
	DWORD m_var32  = 0;
	DWORD m_var33  = 0;
	DWORD m_var34  = 0;
	DWORD m_var35  = 0;
	DWORD m_var36  = 0;
	DWORD m_var37  = 0;
	BYTE m_var38   = 0;
	WORD m_var39   = 0;
	DWORD m_var40  = 0;
	DWORD m_var41  = 0;
	WORD m_var42   = 0;
	WORD m_var43   = 0;
	WORD m_var44   = 0;
	WORD m_var45   = 0;
	DWORD m_var46  = 0;
	DWORD m_var47  = 0;
	DWORD m_var48  = 0;
	BYTE m_var49   = 0;
	DWORD m_var50  = 0;
	DWORD m_var51  = 0;
	DWORD m_var52  = 0;
	DWORD m_var53  = 0;
	DWORD m_var54  = 0;
	DWORD m_var55  = 0;
	BYTE m_var56   = 0;
	DWORD m_var57  = 0;
	DWORD m_var58  = 0;
	DWORD m_var59  = 0;
	DWORD m_var60  = 0;
	DWORD m_var61  = 0;
	DWORD m_var62  = 0;
	DWORD m_var63  = 0;
	DWORD m_var64  = 0;
	DWORD m_var65  = 0;
	DWORD m_var66  = 0;
	DWORD m_var67  = 0;
	DWORD m_var68  = 0;
	DWORD m_var69  = 0;
	WORD m_var70   = 0;
	DWORD m_var71  = 0;
	DWORD m_var72  = 0;
	DWORD m_var73  = 0;
	DWORD m_var74  = 0;
	DWORD m_var75  = 0;
	DWORD m_var76  = 0;
	DWORD m_var77  = 0;
	DWORD m_var78  = 0;
	DWORD m_var79  = 0;
	DWORD m_var80  = 0;
	BYTE m_var81   = 0;
	BYTE m_var82   = 0;
	DWORD m_var83  = 0;
	DWORD m_var84  = 0;
	DWORD m_var85  = 0;
	DWORD m_var86  = 0;
	DWORD m_var87  = 0;
	DWORD m_var88  = 0;
	DWORD m_var89  = 0;
	DWORD m_var90  = 0;
	DWORD m_var91  = 0;
	DWORD m_var92  = 0;
	DWORD m_var93  = 0;
	DWORD m_var94  = 0;
	DWORD m_var95  = 0;
	BYTE m_var96   = 0;
	BYTE m_var97   = 0;
	DWORD m_var98  = 0;
	DWORD m_var99  = 0;
	DWORD m_var100 = 0;
	DWORD m_var101 = 0;
	DWORD m_var102 = 0;
	DWORD m_var103 = 0;
	DWORD m_var104 = 0;
	DWORD m_var105 = 0;
	DWORD m_var106 = 0;
	BYTE m_var107  = 0;
	BYTE m_var108  = 0;
	BYTE m_var109  = 0;
	BYTE m_var110  = 0;
	BYTE m_var111  = 0;
	BYTE m_var112  = 0;
	BYTE m_var113  = 0;
	BYTE m_var114  = 0;
	BYTE m_var115  = 0;
	BYTE m_var116  = 0;
	BYTE m_var117  = 0;
	BYTE m_var118  = 0;
	BYTE m_var119  = 0;
	BYTE m_var120  = 0;
	BYTE m_var121  = 0;
	BYTE m_var122  = 0;

	MemData<WORD> m_md1;
	MemData<WORD> m_md2;
	MemData<WORD> m_md3;
	MemData<WORD> m_md4;
	MemData<WORD> m_md5;
	MemData<WORD> m_md6;
	MemData<WORD> m_md7;
	MemData<WORD> m_md8;
	MemData<WORD> m_md9;
	MemData<DWORD> m_md10;

	std::array<BYTE, 0x100> m_bytes = std::array<BYTE, 0x100>();
	std::vector<DWORD> m_vars1;
	std::vector<DWORD> m_vars2;
	std::vector<MemData<DWORD>> m_mds1;
	std::vector<MemData<DWORD>> m_mds2;
};