1)

SELECT Building.Name
FROM Country INNER JOIN City 
ON Country.CountryID=City.CountryID
INNER JOIN Building
ON City.CityID=Building.CityID
WHERE Country.Name='Poland'
ORDER BY Building.Name;

SELECT Building.Name
FROM Country, City, Building
WHERE Country.Name='Poland'
AND Country.CountryID=City.CountryID
AND City.CityID=Building.CityID
ORDER BY Building.Name;

//----------------------------------
2)

SELECT Country.Name, SUM(City.Population) AS PopSum
FROM Country INNER JOIN City 
ON Country.CountryID=City.CountryID
GROUP BY Country.Name
HAVING PopSum>400;
