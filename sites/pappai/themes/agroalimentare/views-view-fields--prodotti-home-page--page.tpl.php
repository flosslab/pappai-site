<div class="grid">
    <figure class="effect-zoe">
        <?php $alias = drupal_get_path_alias('node/'.$row->nid); ?>
        <a href="<?php print $GLOBALS["base_url"]."/".$GLOBALS["language"]->language . "/" . $alias; ?>">
            <?php print $fields['field_immagine_anteprima']->content; ?>

            <?php if ($fields['field_allergene']->content) { ?>
            <figcaption>
                <ul>
                    <?php print $fields['field_allergene']->content; ?>
                </ul>
                <?php
                }
                else {
                    print "<figcaption style='height:0;'>";
                }
                ?>
                <div class="description">
                    <?php print $fields['title']->content; ?>
                </div>
            </figcaption>
        </a>
    </figure>
</div>