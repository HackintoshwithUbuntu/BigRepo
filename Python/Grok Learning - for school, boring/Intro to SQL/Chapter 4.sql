select *
from people
where origin = 'France' OR origin = 'Germany'






select common_name, scientific_name, kingdom
from Species
Where status = 'Extinct'
  OR status = 'Extinct in the wild'







select country
from CountryMedal
where gold > 10
  and gold > silver






select year, idps, idps_returned
from people
where origin = 'Iraq' and destination = 'Iraq' and year >= 2003 and year <= 2011






select common_name, scientific_name
from Species
where (classification = 'Aves' or classification = 'Amphibia') 
  and status = 'Endangered' 







select station, line, cordon_time, avg_cordon_load
from station
where (cordon_time >= '08:00:00' and cordon_time <= '0900') or (cordon_time >= '1700' and cordon_time <= '1800')





