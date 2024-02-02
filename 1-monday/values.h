#pragma once
#include <string>



/* Small dataset */
const int items_small = 5;  // length of both cities_small[] and temperatures_small[]

std::string cities_small[] = { "Marseille (France)", "Paris (France)", "Berlin (Germany)", "Milan (Italy)", "Rome (Italy)" };

float temperatures_small[] = { 60.4, 54.1, 50.5, 55.4, 59.4 };



/* Big dataset */
const int items = 451;  // length of both cities[] and temperatures[]

std::string cities[] = { "Algiers (Algeria)", "Tamanrasset (Algeria)", "Reggane (Algeria)", "Luanda (Angola)", "Cotonou (Benin)", "Parakou (Benin)", "Kandi (Benin)", "Maun (Botswana)", "Gaborone (Botswana)", "Ghanzi (Botswana)", "Ouagadougou (Burkina Faso)", "Ouahigouya (Burkina Faso)", "Bujumbura (Burundi)", "Garoua (Cameroon)", "Ngaoundere (Cameroon)", "Douala (Cameroon)", "Yaound e (Cameroon)", "Praia (Cape Verde)", "Bangui (Central African Republic)", "Birao (Central African Republic)", "N'Djamena (Chad)", "Ab ech e (Chad)", "Kinshasa (Democratic Republic of the Congo)", "Lubumbashi (Democratic Republic of the Congo)", "Djibouti (Djibouti)", "Cairo (Egypt)", "Alexandria (Egypt)", "Bata (Equatorial Guinea)", "Malabo (Equatorial Guinea)", "Asmara (Eritrea)", "Assab (Eritrea)", "Mek'ele (Ethiopia)", "Addis Ababa (Ethiopia)", "Libreville (Gabon)", "Port-Gentil (Gabon)", "Banjul (The Gambia)", "Accra (Ghana)", "Tamale (Ghana)", "Kumasi (Ghana)", "Conakry (Guinea)", "Kankan (Guinea)", "Bissau (Guinea-Bissau)", "Gagnoa (Ivory Coast)", "Bouak e (Ivory Coast)", "Abidjan (Ivory Coast)", "Odienn e (Ivory Coast)", "Mombasa (Kenya)", "Nairobi (Kenya)", "Garissa (Kenya)", "Lodwar (Kenya)", "Tripoli (Libya)", "Benghazi (Libya)", "Fianarantsoa (Madagascar)", "Toamasina (Madagascar)", "Antananarivo (Madagascar)", "Antsiranana (Madagascar)", "Mahajanga (Madagascar)", "Toliara (Madagascar)", "Karonga (Malawi)", "Blantyre (Malawi)", "Mzuzu (Malawi)", "S egou (Mali)", "Timbuktu (Mali)", "Bamako (Mali)", "Nouadhibou (Mauritania)", "Nouakchott (Mauritania)", "Rabat (Morocco)", "Marrakesh (Morocco)", "Ouarzazate (Morocco)", "Maputo (Mozambique)", "Niamey (Niger)", "Lagos (Nigeria)", "Makurdi (Nigeria)", "Jos (Nigeria)", "Kano (Nigeria)", "Sokoto (Nigeria)", "Brazzaville (Republic of the Congo)", "Pointe-Noire (Republic of the Congo)", "Dolisie (Republic of the Congo)", "Dakar (Senegal)", "Thi es (Senegal)", "Bosaso (Somalia)", "Hargeisa (Somalia)", "Mogadishu (Somalia)", "Pretoria (South Africa)", "Cape Town (South Africa)", "Johannesburg (South Africa)", "Bloemfontein (South Africa)", "Upington (South Africa)", "Durban (South Africa)", "Juba (South Sudan)", "Wau (South Sudan)", "Port Sudan (Sudan)", "Khartoum (Sudan)", "Dar es Salaam (Tanzania)", "Zanzibar City (Tanzania)", "Tabora (Tanzania)", "Dodoma (Tanzania)", "Lom e (Togo)", "Mango (Togo)", "Tunis (Tunisia)", "Gab es (Tunisia)", "Kampala (Uganda)", "Entebbe (Uganda)", "Ndola (Zambia)", "Lusaka (Zambia)", "Livingstone (Zambia)", "Harare (Zimbabwe)", "Bulawayo (Zimbabwe)", "Kabul (Afghanistan)", "Baku (Azerbaijan)", "Yerevan (Armenia)", "Manama (Bahrain)", "Dhaka (Bangladesh)", "Phnom Penh (Cambodia)", "Beijing (China)", "Changsha (China)", "Chongqing (China)", "Guangzhou (China)", "Harbin (China)", "Kunming (China)", "Lhasa (China)", "Shanghai (China)", "Urumqi (China)", "Xi'an (China)", "Yinchuan (China)", "Dili (East Timor)", "Batumi (Georgia)", "Tbilisi (Georgia)", "Hong Kong (Hong Kong)", "New Delhi (India)", "Kolkata (India)", "Mumbai (India)", "Jakarta (Indonesia)", "Denpasar (Indonesia)", "Jayapura (Indonesia)", "Makassar (Indonesia)", "Medan (Indonesia)", "Palembang (Indonesia)", "Pontianak (Indonesia)", "Surabaya (Indonesia)", "Baghdad (Iraq)", "Erbil (Iraq)", "Tehran (Iran)", "Ahvaz (Iran)", "Tabriz (Iran)", "Tel Aviv (Israel)", "Sapporo (Japan)", "Niigata (Japan)", "Tokyo (Japan)", "Kyoto (Japan)", "Hiroshima (Japan)", "Fukuoka (Japan)", "Naha (Japan)", "Almaty (Kazakhstan)", "Nur-Sultan (Kazakhstan)", "Pyongyang (North Korea)", "Seoul (South Korea)", "Kuwait City (Kuwait)", "Bishkek (Kyrgyzstan)", "Vientiane (Laos)", "Beirut (Lebanon)", "Kuala Lumpur (Malaysia)", "Mal e (Maldives)", "Ulaanbaatar (Mongolia)", "Mandalay (Myanmar)", "Yangon (Myanmar)", "Kathmandu (Nepal)", "Muscat (Oman)", "Karachi (Pakistan)", "Lahore (Pakistan)", "Manila (Philippines)", "Dikson (Russia)", "Irkutsk (Russia)", "Novosibirsk (Russia)", "Petropavlovsk-Kamchatsky (Russia)", "Vladivostok (Russia)", "Yakutsk (Russia)", "Abha (Saudi Arabia)", "Riyadh (Saudi Arabia)", "Singapore (Singapore)", "Colombo (Sri Lanka)", "Damascus (Syria)", "Dushanbe (Tajikistan)", "Taipei (Taiwan)", "Bangkok (Thailand)", "Chiang Mai (Thailand)", "Hat Yai (Thailand)", "Nakhon Ratchasima (Thailand)", "Ankara (Turkey)", "Erzurum (Turkey)", "Izmir (Turkey)", "Ashgabat (Turkmenistan)", "Dubai (United Arab Emirates)", "Tashkent (Uzbekistan)", "Da Lat (Vietnam)", "Da Nang (Vietnam)", "Hanoi (Vietnam)", "Ho Chi Minh City (Vietnam)", "Aden (Yemen)", "Sana'a (Yemen)", "Tirana (Albania)", "Andorra la Vella (Andorra)", "Vienna (Austria)", "Minsk (Belarus)", "Brussels (Belgium)", "Sarajevo (Bosnia and Herzegovina)", "Sofia (Bulgaria)", "Zagreb (Croatia)", "Split (Croatia)", "Nicosia (Cyprus)", "Prague (Czech Republic)", "Copenhagen (Denmark)", "Tallinn (Estonia)", "Helsinki (Finland)", "Kuopio (Finland)", "Oulu (Finland)", "Marseille (France)", "Paris (France)", "Berlin (Germany)", "Frankfurt (Germany)", "Piraeus (Greece)", "Budapest (Hungary)", "Reykjavik (Iceland)", "Dublin (Ireland)", "Milan (Italy)", "Palermo (Italy)", "Rome (Italy)", "Napoli (Italy)", "Riga (Latvia)", "Vaduz (Liechtenstein)", "Vilnius (Lithuania)", "Luxembourg City (Luxembourg)", "Skopje (Macedonia)", "Valletta (Malta)", "Chisinau (Moldova)", "Monaco (Monaco)", "Podgorica (Montenegro)", "Amsterdam (Netherlands)", "Bergen (Norway)", "Oslo (Norway)", "Tromso (Norway)", "Cracow (Poland)", "Suwalki (Poland)", "Warsaw (Poland)", "Wroclaw (Poland)", "Lisbon (Portugal)", "Bucharest (Romania)", "Arkhangelsk (Russia)", "Moscow (Russia)", "Murmansk (Russia)", "Rostov-on-Don (Russia)", "Saint Petersburg (Russia)", "Sochi (Russia)", "City of San Marino (San Marino)", "Belgrade (Serbia)", "Bratislava (Slovakia)", "Ljubljana (Slovenia)", "Barcelona (Spain)", "Las Palmas de Gran Canaria (Spain)", "Madrid (Spain)", "Seville (Spain)", "Valencia (Spain)", "Stockholm (Sweden)", "Zurich (Switzerland)", "Istanbul (Turkey)", "Kiev (Ukraine)", "Lviv (Ukraine)", "Odessa (Ukraine)", "Edinburgh (United Kingdom)", "London (United Kingdom)", "St. John's (Antigua and Barbuda)", "Oranjestad (Aruba)", "Nassau (The Bahamas)", "Bridgetown (Barbados)", "Belize City (Belize)", "Hamilton (Bermuda)", "Calgary (Canada)", "Edmonton (Canada)", "Gjoa Haven (Canada)", "Halifax (Canada)", "Iqaluit (Canada)", "Moncton (Canada)", "Montreal (Canada)", "Ottawa (Canada)", "Saskatoon (Canada)", "St. John's (Canada)", "Toronto (Canada)", "Vancouver (Canada)", "Winnipeg (Canada)", "Whitehorse (Canada)", "Yellowknife (Canada)", "George Town (Cayman Islands)", "San Jos e (Costa Rica)", "Havana (Cuba)", "Willemstad (Curacao)", "Roseau (Dominica)", "Santo Domingo (Dominican Republic)", "Nuuk (Greenland)", "La Ceiba (Honduras)", "Tegucigalpa (Honduras)", "Kingston (Jamaica)", "Cabo San Lucas (Mexico)", "Chihuahua (Mexico)", "Guadalajara (Mexico)", "La Paz (Mexico)", "Mexicali (Mexico)", "Mexico City (Mexico)", "Monterrey (Mexico)", "Tijuana (Mexico)", "Toluca (Mexico)", "Veracruz (Mexico)", "Villahermosa (Mexico)", "Managua (Nicaragua)", "Panama City (Panama)", "San Salvador (El Salvador)", "San Juan (Puerto Rico)", "Saint-Pierre (Saint Pierre and Miquelon)", "Albuquerque (United States)", "Anchorage (United States)", "Atlanta (United States)", "Austin (United States)", "Baltimore (United States)", "Boise (United States)", "Boston (United States)", "Charlotte (United States)", "Chicago (United States)", "Columbus (United States)", "Dallas (United States)", "Denver (United States)", "Detroit (United States)", "El Paso (United States)", "Fairbanks (United States)", "Fresno (United States)", "Houston (United States)", "Indianapolis (United States)", "Jacksonville (United States)", "Kansas City (United States)", "Las Vegas (United States)", "Lake Havasu City (United States)", "Los Angeles (United States)", "Louisville (United States)", "Memphis (United States)", "Miami (United States)", "Milwaukee (United States)", "Minneapolis (United States)", "Nashville (United States)", "New Orleans (United States)", "New York City (United States)", "Oklahoma City (United States)", "Omaha (United States)", "Palm Springs (United States)", "Philadelphia (United States)", "Phoenix (United States)", "Pittsburgh (United States)", "Portland (OR) (United States)", "Sacramento (United States)", "Salt Lake City (United States)", "San Antonio (United States)", "San Diego (United States)", "San Francisco (United States)", "San Jose (United States)", "Seattle (United States)", "St. Louis (United States)", "Tampa (United States)", "Tucson (United States)", "Virginia Beach (United States)", "Washington, D.C. (United States)", "Wichita (United States)", "Adelaide (Australia)", "Alice Springs (Australia)", "Brisbane (Australia)", "Cairns (Australia)", "Canberra (Australia)", "Dampier (Australia)", "Darwin (Australia)", "Hobart (Australia)", "Melbourne (Australia)", "Perth (Australia)", "Sydney (Australia)", "Hanga Roa (Chile)", "Suva (Fiji)", "Auckland (New Zealand)", "Christchurch (New Zealand)", "Dunedin (New Zealand)", "Hamilton (New Zealand)", "Lake Tekapo (New Zealand)", "Napier (New Zealand)", "Palmerston North (New Zealand)", "Tauranga (New Zealand)", "Wellington (New Zealand)", "Port Moresby (Papua New Guinea)", "Honiara (Solomon Islands)", "Honolulu (United States)", "Port Vila (Vanuatu)", "Bahia Blanca (Argentina)", "Bariloche (Argentina)", "Buenos Aires (Argentina)", "Comodoro Rivadavia (Argentina)", "Cordoba (Argentina)", "Mar del Plata (Argentina)", "Mendoza (Argentina)", "Neuqu en (Argentina)", "Resistencia (Argentina)", "Rio Gallegos (Argentina)", "Rosario (Argentina)", "Salta (Argentina)", "San Juan (Argentina)", "San Miguel de Tucuman (Argentina)", "Santiago del Estero (Argentina)", "Ushuaia (Argentina)", "Viedma (Argentina)", "La Paz (Bolivia)", "Santa Cruz de la Sierra (Bolivia)", "Sucre (Bolivia)", "Bel em (Brazil)", "Belo Horizonte (Brazil)", "Brasilia (Brazil)", "Campos do Jordao (Brazil)", "Curitiba (Brazil)", "Florianopolis (Brazil)", "Fortaleza (Brazil)", "Goiania (Brazil)", "Manaus (Brazil)", "Porto Alegre (Brazil)", "Recife (Brazil)", "Rio de Janeiro (Brazil)", "Salvador (Brazil)", "Sao Joaquim (Brazil)", "Sao Paulo (Brazil)", "Vitoria (Brazil)", "Antofagasta (Chile)", "Concepcion (Chile)", "La Serena (Chile)", "Punta Arenas (Chile)", "Santiago (Chile)", "Bogota (Colombia)", "Barranquilla (Colombia)", "Medellin (Colombia)", "Guayaquil (Ecuador)", "Quito (Ecuador)", "Stanley (Falkland Islands)", "Cayenne (French Guiana)", "Georgetown (Guyana)", "Asuncion (Paraguay)", "Cusco (Peru)", "Lima (Peru)", "Piura (Peru)", "Paramaribo (Suriname)", "Montevideo (Uruguay)", "Caracas (Venezuela)" };

float temperatures[] = { 63.3, 71.1, 82.9, 78.4, 81.0, 80.2, 81.9, 72.3, 70.0, 70.5, 82.9, 83.5, 74.8, 82.9, 71.6, 80.1, 74.8, 75.9, 78.8, 79.7, 82.9, 84.9, 77.5, 69.4, 85.8, 70.5, 68.0, 77.2, 79.3, 60.1, 86.9, 72.9, 61.0, 78.6, 78.8, 79.0, 79.5, 82.2, 79.0, 79.5, 79.7, 81.0, 79.0, 79.0, 79.0, 79.0, 79.3, 64.0, 84.7, 84.7, 68.0, 67.8, 64.2, 74.1, 64.2, 77.4, 79.3, 75.4, 75.9, 72.0, 63.9, 82.0, 82.0, 82.0, 70.3, 78.3, 63.0, 67.3, 66.0, 73.0, 84.7, 80.2, 78.8, 81.3, 79.5, 82.0, 77.0, 79.0, 75.0, 75.0, 75.0, 86.0, 71.1, 80.8, 64.8, 61.2, 59.9, 60.1, 68.7, 69.1, 82.0, 82.0, 83.1, 85.8, 78.4, 79.0, 73.0, 72.9, 80.4, 82.6, 65.1, 67.1, 68.0, 70.0, 68.5, 67.8, 71.2, 65.1, 66.0, 53.8, 59.2, 54.3, 79.7, 78.6, 82.9, 55.2, 63.3, 65.5, 72.3, 41.0, 60.3, 45.7, 62.1, 45.3, 57.4, 48.2, 79.9, 57.0, 55.2, 73.9, 77.0, 80.1, 80.8, 80.1, 74.7, 80.6, 80.1, 79.7, 81.1, 81.9, 80.8, 72.99, 67.1, 63.0, 77.7, 54.7, 68.0, 48.0, 57.0, 59.7, 60.4, 61.3, 62.6, 73.6, 50.0, 38.3, 51.4, 54.5, 78.3, 52.3, 78.6, 69.6, 81.1, 82.4, 31.3, 82.4, 81.5, 64.9, 82.0, 78.8, 75.7, 83.1, 12.0, 33.8, 35.1, 35.4, 40.8, 16.2, 64.0, 79.0, 81.0, 81.3, 62.6, 58.5, 73.4, 83.5, 78.4, 80.6, 81.1, 53.6, 41.2, 64.2, 62.8, 80.4, 58.6, 64.2, 78.4, 74.5, 81.3, 84.4, 68.0, 59.4, 49.6, 50.7, 44.1, 50.9, 50.2, 51.1, 51.3, 61.0, 67.5, 47.1, 48.4, 42.6, 42.6, 38.1, 36.9, 60.4, 54.1, 50.5, 51.1, 66.9, 52.3, 39.7, 49.6, 55.4, 65.3, 59.4, 60.6, 43.2, 50.2, 42.8, 48.7, 54.3, 65.8, 50.4, 61.5, 59.5, 50.4, 45.9, 42.3, 37.2, 48.7, 45.0, 47.3, 49.3, 63.5, 51.4, 34.3, 42.4, 33.1, 49.8, 42.4, 57.6, 53.2, 54.5, 50.9, 51.6, 64.8, 70.2, 59.0, 66.6, 64.9, 43.9, 48.7, 57.0, 47.1, 46.0, 51.3, 48.7, 50.5, 80.4, 82.6, 76.3, 80.6, 80.1, 72.1, 39.9, 39.6, 6.1, 45.5, 15.3, 43.0, 44.2, 43.9, 37.9, 41.0, 48.9, 50.7, 37.4, 31.8, 24.3, 82.2, 72.7, 77.4, 82.4, 79.2, 78.6, 29.5, 79.2, 71.1, 81.3, 75.0, 65.5, 69.6, 74.7, 73.6, 63.5, 72.1, 64.0, 54.3, 77.7, 80.8, 81.1, 82.0, 73.6, 81.0, 42.3, 57.2, 37.1, 62.6, 69.3, 55.6, 52.5, 51.7, 60.9, 49.7, 53.0, 66.2, 50.7, 50.0, 64.6, 27.9, 64.3, 69.4, 53.2, 68.5, 54.5, 68.5, 74.6, 65.4, 57.1, 63.0, 76.9, 48.1, 46.1, 59.8, 69.2, 55.3, 60.6, 51.1, 76.1, 55.8, 75.0, 51.4, 54.4, 61.3, 52.9, 69.5, 64.1, 58.2, 61.5, 52.4, 57.0, 73.2, 69.7, 60.5, 58.2, 57.0, 63.1, 70.0, 70.5, 77.0, 55.6, 79.5, 81.7, 54.9, 59.2, 65.7, 63.9, 68.9, 78.1, 59.4, 54.0, 52.0, 56.8, 47.7, 58.3, 55.8, 58.6, 55.2, 80.4, 79.7, 77.7, 75.7, 59.5, 46.9, 64.2, 55.4, 64.8, 57.0, 62.8, 58.5, 70.0, 46.0, 63.5, 62.1, 64.2, 67.1, 68.7, 42.3, 57.6, 47.8, 76.6, 60.1, 78.6, 70.0, 69.1, 57.6, 62.2, 69.6, 79.9, 73.8, 80.1, 67.1, 77.9, 74.8, 77.5, 55.9, 66.6, 76.6, 62.1, 54.3, 56.5, 43.0, 58.5, 57.9, 81.3, 72.5, 79.7, 57.9, 42.1, 80.1, 80.2, 72.9, 54.5, 66.6, 76.1, 80.2, 62.1, 71.6 };
