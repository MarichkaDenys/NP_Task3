#pragma once

#include "Book.h"
#include "List.h"
#include "ABookList.h"

namespace TemplatedLists
{
	class BookList : private List<Book>, public ABookList
	{
	public:
		BookList();
		~BookList();

		void Add(Book& item);
		void WriteAllToConsole() const;

		void WriteToConsoleTheOldestBook() const;
		void WriteToConsoleTheLatestBook() const;
		void WriteToConsoleTheMostExpensiveBook() const;
		void WriteToConsoleTheMostCheaperBook() const;
	};
}