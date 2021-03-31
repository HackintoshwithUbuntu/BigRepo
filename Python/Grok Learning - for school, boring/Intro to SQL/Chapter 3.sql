select first_name, surname, vessel
from Convict
where arrived < 1792;






select scientific_name
from Species
where scientific_name >= 'z';






SELECT first_name, surname, issued
FROM Convict
WHERE issued >= '1825-06-09';






SELECT *
FROM Station
WHERE cordon_time < '08:00:00';






SELECT *
FROM CountryMedal
WHERE gold > silver;






select service_id, station, direction
from station
where load_standard < avg_cordon_load


