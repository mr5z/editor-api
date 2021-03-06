#ifndef petipa_api_web_h_included
#define petipa_api_web_h_included

#include <string>
#include <vector>

namespace petipa {
namespace api {
namespace web {

	struct StockMusic
	{
		std::string title;
		std::string author;
		std::string duration;
		std::string file_size;
		unsigned int duration_hours;
		unsigned int duration_minutes;
		unsigned int duration_seconds;
	};

	bool login (const std::string& user_id, const std::string& password);
	bool saml_login (const std::string& provider);
	void logout();
	std::string get_top_banner_content();
	std::string get_bottom_banner_content();

	std::vector<StockMusic> get_stock_music_list();

	// Returns the local file path of the downloaded file.
	std::string download_stock_music (const std::string& title, const std::string& output_dir);

}}}

#endif
