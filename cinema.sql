-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL,ALLOW_INVALID_DATES';

-- -----------------------------------------------------
-- Schema cinema
-- -----------------------------------------------------
DROP SCHEMA IF EXISTS `cinema` ;

-- -----------------------------------------------------
-- Schema cinema
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `cinema` DEFAULT CHARACTER SET utf8 ;
USE `cinema` ;

-- -----------------------------------------------------
-- Table `cinema`.`worker`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `cinema`.`worker` (
  `id_worker` INT NOT NULL AUTO_INCREMENT,
  `tab_num` INT(10) UNSIGNED NOT NULL,
  `FIO` VARCHAR(100) NOT NULL,
  `position` ENUM('admin', 'cashier') NOT NULL,
  `education` VARCHAR(50) NULL DEFAULT NULL,
  `telephone` VARCHAR(11) NOT NULL,
  `birth_date` DATE NULL DEFAULT NULL,
  PRIMARY KEY (`id_worker`),
  UNIQUE INDEX `tab_num_UNIQUE` (`tab_num` ASC))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `cinema`.`films`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `cinema`.`films` (
  `id_film` INT NOT NULL,
  `title` VARCHAR(100) NOT NULL,
  `receipt_date` DATE NOT NULL,
  `director` VARCHAR(100) NULL,
  `genre` VARCHAR(100) NULL COMMENT 'Жанры',
  PRIMARY KEY (`id_film`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `cinema`.`seance`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `cinema`.`seance` (
  `id_seance` INT NOT NULL AUTO_INCREMENT,
  `films_id_film` INT NOT NULL,
  `date_time` DATETIME NOT NULL,
  `price` INT NOT NULL,
  `hall` INT NOT NULL,
  PRIMARY KEY (`id_seance`),
  INDEX `fk_seance_films_idx` (`films_id_film` ASC),
  CONSTRAINT `fk_seance_films`
    FOREIGN KEY (`films_id_film`)
    REFERENCES `cinema`.`films` (`id_film`)
    ON DELETE NO ACTION
    ON UPDATE CASCADE)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `cinema`.`tickets`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `cinema`.`tickets` (
  `id_tickets` INT NOT NULL AUTO_INCREMENT,
  `worker_id_worker` INT NOT NULL,
  `seance_id_seance` INT NOT NULL,
  `row` INT UNSIGNED NULL,
  `place` INT UNSIGNED NULL,
  PRIMARY KEY (`id_tickets`),
  INDEX `fk_tickets_seance1_idx` (`seance_id_seance` ASC),
  INDEX `fk_tickets_worker1_idx` (`worker_id_worker` ASC),
  CONSTRAINT `fk_tickets_seance1`
    FOREIGN KEY (`seance_id_seance`)
    REFERENCES `cinema`.`seance` (`id_seance`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_tickets_worker1`
    FOREIGN KEY (`worker_id_worker`)
    REFERENCES `cinema`.`worker` (`id_worker`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;

USE `cinema` ;

-- -----------------------------------------------------
-- Placeholder table for view `cinema`.`seance_view`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `cinema`.`seance_view` (`title` INT, `date_time` INT, `hall` INT, `price` INT);

-- -----------------------------------------------------
-- View `cinema`.`seance_view`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `cinema`.`seance_view`;
USE `cinema`;
CREATE  OR REPLACE VIEW `seance_view` AS
    SELECT 
        title,date_time,hall,price
    FROM
        (seance inner join films on (films.id_film=seance.films_id_film));
CREATE USER '100001'@'localhost' IDENTIFIED BY 'admin';

GRANT ALL ON cinema.* TO '100001'@'localhost';
CREATE USER '101001'@'localhost' IDENTIFIED BY '12345';

GRANT INSERT, DELETE ON TABLE `cinema`.`tickets` TO '101001'@'localhost';
GRANT SELECT ON TABLE `cinema`.`seance_view` TO '101001'@'localhost';

SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;

-- -----------------------------------------------------
-- Data for table `cinema`.`worker`
-- -----------------------------------------------------
START TRANSACTION;
USE `cinema`;
INSERT INTO `cinema`.`worker` (`id_worker`, `tab_num`, `FIO`, `position`, `education`, `telephone`, `birth_date`) VALUES (1, 100001, 'Ivanov Ivan Ivanovich', 'admin', '', '89211111111', NULL);
INSERT INTO `cinema`.`worker` (`id_worker`, `tab_num`, `FIO`, `position`, `education`, `telephone`, `birth_date`) VALUES (2, 101001, 'Petrov Petr Petrovich', 'cashier', '', '89212222222', NULL);

COMMIT;


-- -----------------------------------------------------
-- Data for table `cinema`.`films`
-- -----------------------------------------------------
START TRANSACTION;
USE `cinema`;
INSERT INTO `cinema`.`films` (`id_film`, `title`, `receipt_date`, `director`, `genre`) VALUES (DEFAULT, 'TItanic', '', 'James Cameron', NULL);
INSERT INTO `cinema`.`films` (`id_film`, `title`, `receipt_date`, `director`, `genre`) VALUES (DEFAULT, 'Avatar', '', 'James Cameron', NULL);
INSERT INTO `cinema`.`films` (`id_film`, `title`, `receipt_date`, `director`, `genre`) VALUES (DEFAULT, 'Star Wars. Episode IV: A New Hope', '', 'George Lucas', NULL);
INSERT INTO `cinema`.`films` (`id_film`, `title`, `receipt_date`, `director`, `genre`) VALUES (DEFAULT, 'Iron Man', '', 'Jon Favreau', NULL);
INSERT INTO `cinema`.`films` (`id_film`, `title`, `receipt_date`, `director`, `genre`) VALUES (DEFAULT, 'Three Billboards Outside Ebbing, Missouri', DEFAULT, 'Martin McDonagh', NULL);

COMMIT;


-- -----------------------------------------------------
-- Data for table `cinema`.`seance`
-- -----------------------------------------------------
START TRANSACTION;
USE `cinema`;
INSERT INTO `cinema`.`seance` (`id_seance`, `films_id_film`, `date_time`, `price`, `hall`) VALUES (DEFAULT, 2, '2018-01-10 12:00:00', 100, 2);
INSERT INTO `cinema`.`seance` (`id_seance`, `films_id_film`, `date_time`, `price`, `hall`) VALUES (DEFAULT, 3, '2018-01-10 13:00:00', 150, 4);
INSERT INTO `cinema`.`seance` (`id_seance`, `films_id_film`, `date_time`, `price`, `hall`) VALUES (DEFAULT, 5, '2018-01-10 14:00:00', 200, 7);

COMMIT;

