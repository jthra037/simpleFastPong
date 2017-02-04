#ifndef BOOK_RESOURCEHOLDER_HPP
#define BOOK_RESOURCEHOLDER_HPP

#include <map>
#include <string>
#include <memory>
#include <stdexcept>
#include <cassert>


template <typename Resource, typename Identifier>
class ResourceHolder
{
	public:
		void						load(Identifier id, const std::string& filename);

#pragma region step 1

		template <typename Parameter>
		void						load(Identifier id, const std::string& filename, const Parameter& secondParam);

#pragma endregion

		Resource&					get(Identifier id);
		const Resource&				get(Identifier id) const;

#pragma region step 2
	private:
		void						insertResource(Identifier id, std::unique_ptr<Resource> resource);
#pragma endregion

	private:
		std::map<Identifier, std::unique_ptr<Resource>>	mResourceMap;
};

#include "ResourceHolder.inl"
#endif // BOOK_RESOURCEHOLDER_HPP
