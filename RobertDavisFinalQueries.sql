CREATE TABLE AnimeAccount (
    AccountID int,
    CreationDate varchar(255),
    Email varchar(255),
    Username varchar(255),
    Password varchar(255)
);

CREATE TABLE AnimeSocial (
    AccountID int,
    FavoriteGenre varchar(255),
    FirstAnimeViewed varchar(255),
);

CREATE TABLE AnimeInfo(
	AccountID int,
	LastAnimeWatched varchar(255),
	NumOfSeasons int,
);
-----------------------------------
Insert into AnimeAccount (AccountID,CreationDate,Email,Username,Password)
values(1,getdate(),'gokusolo@gmail.com','saiyanswag85','dragonball7684')

Insert into AnimeAccount (AccountID,CreationDate,Email,Username,Password)
values(2,getdate(),'ichigoat123@yahoo.com','quincyjones','bankai1997')

Insert into AnimeAccount (AccountID,CreationDate,Email,Username,Password)
values(3,getdate(),'nakamaningen@gmail.com','mihawksolos','shankssucks123')

Insert into AnimeAccount (AccountID,CreationDate,Email,Username,Password)
values(4,getdate(),'num1strikerjapan@gmail.com','kingleo','thisismysoccer85')

Insert into AnimeAccount (AccountID,CreationDate,Email,Username,Password)
values(5,getdate(),'hokageordemon@gmail.com','uzumakispiral','iloveramen99')

---
Insert into AnimeSocial(AccountID,FavoriteGenre,FirstAnimeViewed)
values(1,'Shonen','Dragonball')

Insert into AnimeSocial(AccountID,FavoriteGenre,FirstAnimeViewed)
values(2,'Shonen','Fist of the North Star')

Insert into AnimeSocial(AccountID,FavoriteGenre,FirstAnimeViewed)
values(3,'Mecha','G-Gundam')

Insert into AnimeSocial(AccountID,FavoriteGenre,FirstAnimeViewed)
values(4,'Shoujo','Sailor Moon')

Insert into AnimeSocial(AccountID,FavoriteGenre,FirstAnimeViewed)
values(5,'Seinen','Berserk')



---
Insert into AnimeInfo(AccountID,LastAnimeWatched,NumOfSeasons)
values(1,'Demon Slayer',3)

Insert into AnimeInfo(AccountID,LastAnimeWatched,NumOfSeasons)
values(2,'Hells Paradise',1)

Insert into AnimeInfo(AccountID,LastAnimeWatched,NumOfSeasons)
values(3,'Chainsaw Man',1)

Insert into AnimeInfo(AccountID,LastAnimeWatched,NumOfSeasons)
values(4,'Oshi no Ko',1)

Insert into AnimeInfo(AccountID,LastAnimeWatched,NumOfSeasons)
values(5,'King Ohger',1)



----
UPDATE AnimeSocial
SET FavoriteGenre='Shonen'
WHERE AccountID=5;


-------------------GROUP BY ORDER AND JOIN
SELECT AnimeAccount.AccountID,AnimeInfo.LastAnimeWatched,AnimeSocial.FirstAnimeviewed,AnimeSocial.FavoriteGenre
FROM AnimeAccount
JOIN AnimeInfo
ON AnimeAccount.AccountID = AnimeInfo.AccountID
JOIN AnimeSocial
ON AnimeSocial.AccountID = AnimeInfo.AccountID
GROUP BY AnimeAccount.AccountID,AnimeInfo.LastAnimeWatched,AnimeSocial.FirstAnimeviewed,AnimeSocial.FavoriteGenre
ORDER BY AnimeSocial.FavoriteGenre;



----------------------STORED PROCEDURE
Go
ALTER PROCEDURE SelectLowSeasonAnime @NumOfSeasons INT
AS
BEGIN
SELECT * FROM AnimeInfo WHERE NumOfSeasons=@NumOfSeasons
END;

EXEC SelectLowSeasonAnime @NumOfSeasons=1;


Go
ALTER PROCEDURE ChangeAccountDetail 
(@Email VARCHAR(255),@Username VARCHAR(255),@Password VARCHAR(255),@AccountID INT)

AS
BEGIN
	UPDATE AnimeAccount
	SET Email = @Email,Username = @Username, Password=@Password
	FROM Soft_Engineering_Final.dbo.AnimeAccount
	WHERE AnimeAccount.AccountID=@AccountID
END;

EXEC ChangeAccountDetail @Email='sunwukong1997@gmail.com',@Username='gokusolo85',@Password='saiyanswag',@AccountID=1

SELECT * FROM AnimeAccount

