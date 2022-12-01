#pragma once

#include "Magazine.h"
#include "List.h"
#include "AMagazineList.h"

namespace TemplatedLists
{
	class MagazineList : private List<Magazine>, public AMagazineList
	{
	public:
		MagazineList();
		~MagazineList();

		void Add(Magazine& item);
		void WriteAllToConsole() const;

		void WriteToConsoleTheOldestMagazine() const;
		void WriteToConsoleTheLatestMagazine() const;
		void WriteToConsoleTheMostExpensiveMagazine() const;
		void WriteToConsoleTheMostCheaperMagazine() const;
	};

}