#include "profile.hpp"

Profile::Profile(const std::string& new_name, int new_age, const std::string& new_city,
                 const std::string& new_country, const std::string& new_pronouns)
  : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {}

std::string Profile::view_profile() const {
  std::string bio = "Name: " + name;
  bio += "\nAge: " + std::to_string(age);
  bio += "\nCity: " + city;
  bio += "\nCountry: " + country;
  bio += "\nPronouns: " + pronouns;

  std::string hobby_string = "Hobbies:\n";
  if (hobbies.empty()) {
    hobby_string += " - None listed\n";
  } else {
    for (const std::string& hobby : hobbies) {
      hobby_string += " - " + hobby + "\n";
    }
  }

  return bio + "\n" + hobby_string;
}

void Profile::add_hobby(const std::string& new_hobby) {
  hobbies.push_back(new_hobby);
}